#include "teacherinterface.h"
#include "ui_teacherinterface.h"
#include "studentscoreanalyzewindow.h"
#include "selfmakeexamdialog.h"
#include <QVector>
#include <QInputDialog>

TeacherInterface::TeacherInterface(UserInfoNode* userInfo, QWidget* parent) :
	QWidget(parent),
	ui(new Ui::TeacherInterface)
{
	ui->setupUi(this);
	this->thisUser = userInfo;
	ui->teacherInfoLabel->setText(QString::fromLocal8Bit("教师:  ") + userInfo->getName() + 
		QString::fromLocal8Bit("   班级号:") + QString::number(userInfo->getClassNumber()));
	this->setWindowTitle("教师:" + userInfo->getName());

	this->newExam = new ExamInfo();
	//this->allUser = new UserInfo(); allUser->init();

	QObject::connect(ui->analyzeScorePushButton, SIGNAL(clicked()), this, SLOT(showAnalyzeScore()));
	QObject::connect(ui->selfMakeExamPushButton, SIGNAL(clicked()), this, SLOT(showSelfMakeExam()));
	QObject::connect(ui->changeInfoPushButton, SIGNAL(clicked()), this, SLOT(showPersonInfoChange()));
}

void TeacherInterface::showAnalyzeScore()
{
	StudentScoreAnalyzeWindow* w = new StudentScoreAnalyzeWindow(this->thisUser->getClassNumber());
	w->show();
}

void TeacherInterface::showSelfMakeExam()
{
	bool inputOk;
	int problemNumber = QInputDialog::getInt(NULL, QString::fromLocal8Bit("Input")
		, QString::fromLocal8Bit("请输入要出的试题数量："), 
		4, 4, 20, 1, &inputOk);
	int resScore = 100;
	if (inputOk)
	{
		ExamInfo* allExams = new ExamInfo(); allExams->init();
		int examNum = allExams->getLength() + 1;
		allExams->clear();
		delete allExams;
		QString fileLocation = QString::fromLocal8Bit("E:\\Project\\test\\test") +
			QString::number(examNum);
		ExamInfoNode* node = new ExamInfoNode();
		node->setId(examNum);
		node->setClassNumber(this->thisUser->getClassNumber());
		node->setFileLocation(fileLocation);

		this->newExam->clear();
		this->newExam->addNode(node);
		this->newExam->saveAdd();

		QFile* fp = new QFile(); fp->setFileName(fileLocation);
		if (!fp->open(QFile::WriteOnly | QIODevice::Truncate | QIODevice::Text))
		{
			qDebug() << "open error";
			return;
		}
		fp->write((QString::number(problemNumber) +
			QString::fromLocal8Bit("\n")).toLocal8Bit());
		fp->close();
		for (int i = 1; i <= problemNumber; i++)
		{
			int examData[3];
			examData[0] = resScore; examData[1] = i; examData[2] = problemNumber;
			SelfMakeExamDialog* d = new SelfMakeExamDialog(examData, &resScore, fileLocation);
			d->exec();
		}
		
	}

}

void TeacherInterface::showPersonInfoChange()
{
	ChangeUserInfoWindow* w = new ChangeUserInfoWindow(this->thisUser);
	w->show();
}
TeacherInterface::~TeacherInterface()
{
	delete ui;
}
