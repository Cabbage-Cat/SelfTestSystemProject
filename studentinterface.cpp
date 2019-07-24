#include "studentinterface.h"
#include "ui_studentinterface.h"
#include "pastexaminfowindow.h"
StudentInterface::StudentInterface(UserInfoNode* node,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
	this->thisUser = node;
	this->setWindowTitle(QString::fromLocal8Bit("学生:") + node->getName());

	this->thisUserChangeInfo = new UserInfo();
	this->thisUserChangeInfo->addNode(thisUser);

	this->allExams = new ExamInfo(); 
	this->allExams->init();
	this->unfinishedExams = new ExamInfo();

	this->finishedExams = new StudentFinishedExam(node->getId()); this->finishedExams->init();
	this->nowFinishedExams = new StudentFinishedExam(node->getId()); this->nowFinishedExams->getNode(-1)->setId(1);

    QObject::connect(ui->answerSelectExamPushButton,SIGNAL(clicked()),this,SLOT(
                         answerTestPaper()));
    QObject::connect(ui->selfTestPushButton,SIGNAL(clicked()),this,
                     SLOT(testSelf()));
    QObject::connect(ui->showPastExamPushButton,SIGNAL(clicked()),this,
                     SLOT(showPastExams()));
    QObject::connect(ui->changeInfoPushButton,SIGNAL(clicked()),this,
                     SLOT(showPersonInfoChange()));
	showUnfinishedExams();
}

StudentInterface::~StudentInterface()
{
    delete ui;
	//unfinishedExams finishedExams nowFinishedExams thisUserChangeInfo
	if (this->allExams != nullptr)
	{
		delete this->allExams;
		this->allExams = nullptr;
	}
	if (this->unfinishedExams != nullptr)
	{
		delete this->unfinishedExams;
		this->unfinishedExams = nullptr;
	}
	if (this->finishedExams != nullptr)
	{
		delete this->finishedExams;
		this->finishedExams = nullptr;
	}
	if (this->nowFinishedExams != nullptr)
	{
		delete this->nowFinishedExams;
		this->nowFinishedExams = nullptr;
	}
	if (this->thisUserChangeInfo != nullptr)
	{
		delete this->thisUserChangeInfo;
		this->thisUserChangeInfo = nullptr;
	}
}

void StudentInterface::showUnfinishedExams()
{
    ui->treeWidget->clear();
	int stuClassNum = thisUser->getClassNumber();
	ExamInfoNode* examNode = (ExamInfoNode*)this->allExams->getNode(-1);
	examNode = (ExamInfoNode*)examNode->getNext();
	while (examNode != nullptr)
	{
		if (examNode->getClassNumber() != stuClassNum)
		{
			examNode = (ExamInfoNode*)examNode->getNext();
		}
		else
		{
			if (!this->finishedExams->haveExamId(examNode->getId()))
			{
				QTreeWidgetItem* item = new QTreeWidgetItem();
				item->setText(0, QString::number(stuClassNum));
				item->setText(1, QString::number(examNode->getId()));
				examNode = (ExamInfoNode*)examNode->getNext();
				ui->treeWidget->addTopLevelItem(item);
			}
			examNode = (ExamInfoNode*)examNode->getNext();
		}
	}
	
}
void StudentInterface::answerTestPaper()
{
}

void StudentInterface::showPastExams()
{
	PastExamInfoWindow* w = new PastExamInfoWindow(this->finishedExams);
	//w->setWindowTitle(QString::fromLocal8Bit("以往成绩"));
	w->show();
}

void StudentInterface::testSelf()
{
}

void StudentInterface::showPersonInfoChange()
{
}
