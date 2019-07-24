#include "adduserwindow.h"
#include "ui_adduserwindow.h"

AddUserWindow::AddUserWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUserWindow)
{
    ui->setupUi(this);
}

AddUserWindow::~AddUserWindow()
{
    delete ui;
}
