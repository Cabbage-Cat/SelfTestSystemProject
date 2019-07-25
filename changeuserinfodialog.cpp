#include "changeuserinfodialog.h"
#include "ui_changeuserinfodialog.h"
#include "changeuserpasswd.h"
#include <QMessageBox>

ChangeUserInfoDialog::ChangeUserInfoDialog(UserInfoNode* user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeUserInfoDialog)
{
    ui->setupUi(this);
	this->setWindowTitle(user->getName());
	this->userNode = user;
	QObject::connect(ui->confirmPushButton, SIGNAL(clicked()), this, SLOT(changePassword()));
}

ChangeUserInfoDialog::~ChangeUserInfoDialog()
{
    delete ui;
}

void ChangeUserInfoDialog::changePassword()
{
	QString oldPassword = ui->oldPassworLineEdit->text();
	QByteArray pe; pe.append(oldPassword);
	oldPassword = pe.toBase64();
	if (oldPassword != userNode->getPassword())
	{
		qDebug() << oldPassword << userNode->getPassword();
		QMessageBox::warning(this, "ERROR", "Your old password is not correct.");
		return;
	}
	if (ui->newPasswordLineEdit->text() != ui->confirmPasswordLineEdit->text())
	{
		QMessageBox::warning(this, "ERROR", "Your new password is not same as cofirm password.");
		return;
	}
	ChangeUserpasswd::changePasswd(this->userNode, ui->confirmPasswordLineEdit->text());
	QMessageBox::information(this, "SUCCESS", "CHANGE PASSWORD DONE.");
	this->window()->close();
}