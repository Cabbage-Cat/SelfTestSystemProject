#include "pastexaminfowindow.h"
#include "ui_pastexaminfowindow.h"

PastExamInfoWindow::PastExamInfoWindow(StudentFinishedExam* finishedExams,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PastExamInfoWindow)
{
	ui->setupUi(this);
	StudentFinishedExamNode* node = (StudentFinishedExamNode*)finishedExams->getNode(-1)->getNext();
	while (node != nullptr)
	{
		QTreeWidgetItem* item = new QTreeWidgetItem();
		item->setText(0, QString::number(node->getExamId()));
		item->setText(1, QString::number(node->getScore()));
        item->setText(2,node->getComment());
		node = (StudentFinishedExamNode*)node->getNext();
		ui->treeWidget->addTopLevelItem(item);
	}
}

PastExamInfoWindow::~PastExamInfoWindow()
{
    delete ui;
}
