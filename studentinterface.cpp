#include "studentinterface.h"
#include "ui_studentinterface.h"

StudentInterface::StudentInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
}

StudentInterface::~StudentInterface()
{
    delete ui;
}
