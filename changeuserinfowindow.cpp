#include "changeuserinfowindow.h"
#include "ui_changeuserinfowindow.h"

ChangeUserInfoWindow::ChangeUserInfoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeUserInfoWindow)
{
    ui->setupUi(this);
}

ChangeUserInfoWindow::~ChangeUserInfoWindow()
{
    delete ui;
}
