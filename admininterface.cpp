#include "admininterface.h"
#include "ui_admininterface.h"

AdminInterface::AdminInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminInterface)
{
    ui->setupUi(this);
}

AdminInterface::~AdminInterface()
{
    delete ui;
}
