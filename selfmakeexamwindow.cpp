#include "selfmakeexamwindow.h"
#include "ui_selfmakeexamwindow.h"

SelfMakeExamWindow::SelfMakeExamWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelfMakeExamWindow)
{
    ui->setupUi(this);
}

SelfMakeExamWindow::~SelfMakeExamWindow()
{
    delete ui;
}
