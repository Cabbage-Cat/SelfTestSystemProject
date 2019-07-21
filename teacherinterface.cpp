#include "teacherinterface.h"
#include "ui_teacherinterface.h"

TeacherInterface::TeacherInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeacherInterface)
{
    ui->setupUi(this);
}

TeacherInterface::~TeacherInterface()
{
    delete ui;
}
