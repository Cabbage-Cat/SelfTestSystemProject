#include "teacherinterface.h"
#include "ui_teacherinterface.h"
#include "studentscoreanalyzewindow.h"
#include <QVector>
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
