#include "studentscoreanalyzewindow.h"
#include "ui_studentscoreanalyzewindow.h"

StudentScoreAnalyzeWindow::StudentScoreAnalyzeWindow(int classNumber, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentScoreAnalyzeWindow)
{
    ui->setupUi(this);
	this->setWindowTitle("Class : " + QString::number(classNumber));
	this->allUser = new UserInfo(); allUser->init();

	QVector<int> studentInClass;
	UserInfoNode* node = (UserInfoNode*)this->allUser->getNode(-1);
	node = (UserInfoNode*)node->getNext();
	while (node != nullptr)
	{
		if (node->getClassNumber() == classNumber && node->getType() == 2)
		{
			studentInClass.push_back(node->getId());
		}
		node = (UserInfoNode*)node->getNext();
	}

	for (int studentId : studentInClass)
	{
		StudentFinishedExam* studentFinishedExam = new StudentFinishedExam(studentId); studentFinishedExam->init();
		StudentFinishedExamNode* node = (StudentFinishedExamNode*)studentFinishedExam->getNode(-1);
		node = (StudentFinishedExamNode*)node->getNext();

		while (node != nullptr)
		{
			QTreeWidgetItem* item = new QTreeWidgetItem();
			item->setText(0, QString::number(node->getId()));
			item->setText(1, QString::number(node->getExamId()));
			item->setText(2, QString::number(node->getScore()));
			ui->treeWidget->addTopLevelItem(item);
			node = (StudentFinishedExamNode*)node->getNext();
		}
	}
}

StudentScoreAnalyzeWindow::~StudentScoreAnalyzeWindow()
{
    delete ui;
}
