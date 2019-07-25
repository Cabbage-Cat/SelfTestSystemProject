#include "admininterface.h"
#include "ui_admininterface.h"
#include "adduserdialog.h"
#include <QInputDialog>
#include <QMessageBox>
AdminInterface::AdminInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminInterface)
{
	this->allUser = new UserInfo(); this->allUser->init();
	ui->setupUi(this);
	QObject::connect(ui->changeSelectedUserPasswdPushButton, SIGNAL(clicked()), this, SLOT(changeSelectUserInfo()));
	QObject::connect(ui->deleteSelectedPushButton, SIGNAL(clicked()), this, SLOT(deleteSelectUser()));
	QObject::connect(ui->addUserPushButton, SIGNAL(clicked()), this, SLOT(addUser()));
	this->readAllUser();
}

void AdminInterface::deleteSelectUser() 
{
	modifyUser->clear();
	UserInfoNode* node = new UserInfoNode();
	QTreeWidgetItem* item = ui->treeWidget->currentItem();
	int selectedUserId = item->text(1).toInt();
	node->setId(selectedUserId);
	this->modifyUser->addNode(node);
	this->modifyUser->saveDelete();
	delete item;
}

void AdminInterface::changeSelectUserInfo()
{
	UserInfoNode* node;
	QTreeWidgetItem* item = ui->treeWidget->currentItem();
	int selectedUserId = item->text(1).toInt();
	node = (UserInfoNode*)this->allUser->getNode(selectedUserId);
	ChangeUserInfoDialog* d = new ChangeUserInfoDialog(node);
	d->exec();
	ui->treeWidget->clear();
	this->allUser->clear(); 
	this->readAllUser();
}

void AdminInterface::addUser()
{
	this->readAllUser();
	AddUserDialog* d = new AddUserDialog(this->allUser);
	d->exec();
    this->readAllUser();
}

void AdminInterface::readAllUser()
{
    this->allUser->clear();
    delete this->allUser;
    this->allUser = new UserInfo();
    this->allUser->init();
	UserInfoNode* node = (UserInfoNode*)this->allUser->getNode(-1);
	node = (UserInfoNode*)node->getNext();
	this->modifyUser = new UserInfo();
	while (node != nullptr)
	{
		if (node->getId() != 1000) // Not root user.
		{
			QTreeWidgetItem* item = new QTreeWidgetItem();
			QString userType;
			switch (node->getType())
			{
			case 1:
				userType = "Teacher";
				break;
			case 2:
				userType = "Student";
				break;
			default:
				break;
			}
			item->setText(0, userType);
			item->setText(1, QString::number(node->getId()));
			QString password = node->getPassword();
			password = QString(QByteArray::fromBase64(password.toLocal8Bit()));
			item->setText(2, password);
			ui->treeWidget->addTopLevelItem(item);
		}
		node = (UserInfoNode*)node->getNext();
	}
}

AdminInterface::~AdminInterface()
{
    delete ui;
}
