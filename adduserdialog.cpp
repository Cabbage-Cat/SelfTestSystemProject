#include "adduserdialog.h"
#include "ui_adduserdialog.h"
#include <QMessageBox>
AddUserDialog::AddUserDialog(UserInfo* allUser, QWidget* parent) :
	QDialog(parent),
	ui(new Ui::AddUserDialog)
{
	ui->setupUi(this);
	ui->confirmPushButton->setDisabled(true);
	this->allUsers = allUser;

	ui->classNumberLineEdit->setValidator(new QIntValidator(1, 10, this));
	ui->idLineEdit->setValidator(new QIntValidator(1000, 1000000000, this));
	ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
	ui->nameLineEdit->setText(QString::fromLocal8Bit("张三"));
	QRegExp rx;
	rx.setPattern("^[0-9|a-z|^\s]{1,16}$");
	ui->passwordLineEdit->setValidator(new QRegExpValidator(rx, this));

	connect(ui->idLineEdit, SIGNAL(textChanged(QString)), this, SLOT(setConfirmPushButtonStatus()));
	connect(ui->passwordLineEdit, SIGNAL(textChanged(QString)), this, SLOT(setConfirmPushButtonStatus()));
	connect(ui->classNumberLineEdit, SIGNAL(textChanged(QString)), this, SLOT(setConfirmPushButtonStatus()));
	connect(ui->confirmPushButton, SIGNAL(clicked()), this, SLOT(confirmAddUser()));

}

AddUserDialog::~AddUserDialog()
{
	delete ui;
}

void AddUserDialog::setConfirmPushButtonStatus()
{
	if (ui->idLineEdit->text().size() > 3 && ui->passwordLineEdit->text().size() > 5 && ui->classNumberLineEdit->text().size() > 0)
		ui->confirmPushButton->setEnabled(true);
	else
		ui->confirmPushButton->setDisabled(true);
}

void AddUserDialog::confirmAddUser()
{
	UserInfoNode* node = new UserInfoNode();
	node->setName(ui->nameLineEdit->text());
	QString type = ui->comboBox->currentText();
	int intType;
	if (type == QString::fromLocal8Bit("老师"))
		intType = 1;
	else
		intType = 2;
	node->setType(intType);
	QString passwd = ui->passwordLineEdit->text();
	QByteArray pe; pe.append(passwd);
	passwd = pe.toBase64();
	node->setPassword(passwd);
	node->setClassNumber(ui->classNumberLineEdit->text().toInt());
	node->setId(ui->idLineEdit->text().toInt());
	if (this->allUsers->getNode(node->getId()) != nullptr)
		QMessageBox::warning(NULL, "ERROR", QString::fromLocal8Bit("用户已经存在。"));
	else
	{
		UserInfo* addList = new UserInfo();
		addList->addNode(node);
		addList->saveAdd();
		delete addList;
		this->window()->close();
	}
}