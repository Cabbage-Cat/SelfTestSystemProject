#include "studentinterface.h"
#include "ui_studentinterface.h"
#include "pastexaminfowindow.h"
#include "changeuserinfowindow.h"
#include "doteacherexamdialog.h"
#include <QInputDialog>
StudentInterface::StudentInterface(UserInfoNode* node,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
	this->thisUser = node;
	this->setWindowTitle(QString::fromLocal8Bit("学生:") + node->getName());

//	this->thisUserChangeInfo = new UserInfo();
//	this->thisUserChangeInfo->addNode(thisUser);

	this->allExams = new ExamInfo(); 
	this->allExams->init();
	this->unfinishedExams = new ExamInfo();

	this->finishedExams = new StudentFinishedExam(node->getId()); this->finishedExams->init();
    //this->nowFinishedExams = new StudentFinishedExam(node->getId()); this->nowFinishedExams->getNode(-1)->setId(1);

    QObject::connect(ui->answerSelectExamPushButton,SIGNAL(clicked()),this,SLOT(
                         showAnswerTestPaper()));
    QObject::connect(ui->selfTestPushButton,SIGNAL(clicked()),this,
                     SLOT(showTestSelf()));
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
//	if (this->nowFinishedExams != nullptr)
//	{
//		delete this->nowFinishedExams;
//		this->nowFinishedExams = nullptr;
//	}
//	if (this->thisUserChangeInfo != nullptr)
//	{
//		delete this->thisUserChangeInfo;
//		this->thisUserChangeInfo = nullptr;
//	}
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
				//examNode = (ExamInfoNode*)examNode->getNext();
				ui->treeWidget->addTopLevelItem(item);
			}
			examNode = (ExamInfoNode*)examNode->getNext();
		}
	}
	
}
void StudentInterface::showAnswerTestPaper()
{
    QTreeWidgetItem* selectItem = ui->treeWidget->currentItem();
    int testNumber = selectItem->text(1).toInt();
    ExamInfoNode* selectExam = (ExamInfoNode*)this->allExams->getNode(testNumber);
    QString examLocation = selectExam->getFileLocation();
    QFile* fp = new QFile(); fp->setFileName(examLocation);
    if (!fp->open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug() << "open error";
        return;
    }
    char buf[3]; fp->readLine(buf,3);
    int testLength = buf[0] - '0';
    int score = 0;
    while (!fp->atEnd())
    {
        QString examData[3];
        QByteArray buf;
        buf = fp->readLine();
        examData[0] = QString(buf).trimmed();
        buf = fp->readLine(1000);
        examData[1] = QString(buf).trimmed();
        buf = fp->readLine(1000);
        examData[2] = QString(buf).trimmed();
        //DoTeacherExamWindow *w = new DoTeacherExamWindow(&score,examData);
        DoTeacherExamDialog *d = new DoTeacherExamDialog(&score,examData);
        d->exec();
        //w->show();
    }
    qDebug() << score;
    fp->close();
    // Add selectExam from database.
    StudentFinishedExamNode* node = new StudentFinishedExamNode();
    node->setId(this->thisUser->getId()); node->setExamId(testNumber); node->setScore(score);
    StudentFinishedExam* saveTest = new StudentFinishedExam(this->thisUser->getId());
    saveTest->addNode(node);
    saveTest->saveAdd();
    this->finishedExams->addNode(node); //添加到finishedExams,使这次测试回显在已完成的测试中。
    delete selectItem;
}

void StudentInterface::showPastExams()
{
	PastExamInfoWindow* w = new PastExamInfoWindow(this->finishedExams);
	//w->setWindowTitle(QString::fromLocal8Bit("以往成绩"));
	w->show();
}

void StudentInterface::showTestSelf()
{
    bool testSelfIsOk;
    int testNum = QInputDialog::getInt(NULL,QString::fromLocal8Bit("自我测试"),
                                       QString::fromLocal8Bit("请输入测试数量(2-10)"),4
                                       ,2,10,1,&testSelfIsOk);
    if (testSelfIsOk)
    {
        QStringList selectMode;
        selectMode.append(QString::fromLocal8Bit("整数运算"));
        selectMode.append(QString::fromLocal8Bit("小数运算"));
        selectMode.append(QString::fromLocal8Bit("分数运算"));
        bool selectModeOk;
        QString mode = QInputDialog::getItem(NULL,QString::fromLocal8Bit("请选择项目："),
                              QString::fromLocal8Bit("练习项目"),
                              selectMode,1,false,&selectModeOk);
        if (selectModeOk)
        {

        }
    }
}

void StudentInterface::showPersonInfoChange()
{
    ChangeUserInfoWindow* w = new ChangeUserInfoWindow(this->thisUser);
    w->show();
}
