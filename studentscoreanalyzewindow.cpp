#include "studentscoreanalyzewindow.h"
#include "ui_studentscoreanalyzewindow.h"
#include <QInputDialog>
#include <QMessageBox>
StudentScoreAnalyzeWindow::StudentScoreAnalyzeWindow(int classNumber, QWidget* parent) :
	QWidget(parent),
	ui(new Ui::StudentScoreAnalyzeWindow)
{
	ui->setupUi(this);
	this->setWindowTitle("Class : " + QString::number(classNumber));
	this->allUser = new UserInfo(); allUser->init();
	QObject::connect(ui->treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),
		this, SLOT(setExamComment(QTreeWidgetItem*, int)));
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

void StudentScoreAnalyzeWindow::setExamComment(QTreeWidgetItem* item, int column)
{
	StudentFinishedExamNode* node = new StudentFinishedExamNode();
	node->setId(item->text(0).toInt());
	node->setExamId(item->text(1).toInt());
	bool ok;
	QString comment = QInputDialog::getText(NULL, QString::fromLocal8Bit("请输入:"), QString::fromLocal8Bit("请输入您对该学生此次考试的评语："),
		QLineEdit::Normal, QString::fromLocal8Bit("较好，仍需继续努力"), &ok);
	if (ok)
	{
		node->setComment(comment);
		StudentFinishedExam* SFEList = new StudentFinishedExam(node->getId());
		SFEList->addNode(node);
		SFEList->saveUpdateComment();
		//delete SFEList;
		QMessageBox::warning(NULL, "Done", QString::fromLocal8Bit("设置考试评语完成。"));
	}
	//delete node;
}
