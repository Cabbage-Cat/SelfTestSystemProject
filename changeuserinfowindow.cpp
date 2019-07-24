#include "changeuserinfowindow.h"
#include "ui_changeuserinfowindow.h"
#include "changeuserpasswd.h"
#include <QMessageBox>
ChangeUserInfoWindow::ChangeUserInfoWindow(UserInfoNode* user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeUserInfoWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(user->getName());
    this->userNode = user;
    QObject::connect(ui->confirmPushButton,SIGNAL(clicked()),this,SLOT(changePassword()));
}

ChangeUserInfoWindow::~ChangeUserInfoWindow()
{
    delete ui;
}

void ChangeUserInfoWindow::changePassword()
{
    QString oldPassword = ui->oldPassworLineEdit->text();
    QByteArray pe; pe.append(oldPassword);
    oldPassword = pe.toBase64();
    if (oldPassword != userNode->getPassword())
    {
        qDebug() << oldPassword << userNode->getPassword();
        QMessageBox::warning(this,"ERROR","Your old password is not correct.");
        return;
    }
    if (ui->newPasswordLineEdit->text() != ui->confirmPasswordLineEdit->text())
    {
        QMessageBox::warning(this,"ERROR","Your new password is not same as cofirm password.");
        return;
    }
    ChangeUserpasswd::changePasswd(this->userNode,ui->confirmPasswordLineEdit->text());
}
