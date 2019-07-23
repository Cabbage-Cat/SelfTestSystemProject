#include "studentinterface.h"
#include "ui_studentinterface.h"

StudentInterface::StudentInterface(UserInfoNode* node,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
	
	this->setWindowTitle(QString::fromLocal8Bit("Ñ§Éú:") + node->getName());

	this->allExams = new ExamInfo(); this->allExams->init();
	this->unfinishedExams = new ExamInfo();

	this->finishedExams = new StudentFinishedExam(node->getId()); this->finishedExams->init();
	this->nowFinishedExams = new StudentFinishedExam(node->getId()); this->nowFinishedExams->getNode(-1)->setId(1);

    QObject::connect(ui->answerSelectExamPushButton,SIGNAL(clicked(QTreeWidgetItem*, int)),this,SLOT(
                         answerTestPaper(QTreeWidgetItem*, int)));
    QObject::connect(ui->selfTestPushButton,SIGNAL(clicked()),this,
                     SLOT(testSelf()));
    QObject::connect(ui->showPastExamPushButton,SIGNAL(clicked()),this,
                     SLOT(showPastExams()));
    QObject::connect(ui->changeInfoPushButton,SIGNAL(clicked()),this,
                     SLOT(showPersonInfoChange()));
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


}
void StudentInterface::answerTestPaper(QTreeWidgetItem* item, int col)
{
}

void StudentInterface::showPastExams()
{
}

void StudentInterface::testSelf()
{
}

void StudentInterface::showPersonInfoChange()
{
}
