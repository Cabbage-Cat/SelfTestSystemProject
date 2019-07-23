#include "login.h"
#include "ui_login.h"
#include "admininterface.h"
#include "studentinterface.h"
#include "teacherinterface.h"
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Self Test System.");
    Login::setUserLineEdit();
    ui->loginPushButton->setEnabled(false);

    // Set when loginButton clicked.
    QObject::connect(ui->loginPushButton,SIGNAL(clicked()),this,SLOT(loginSystemSlot()));
    QObject::connect(ui->nameLineEdit,SIGNAL(textChanged(QString)),this,SLOT(setLoginPushButtonStatus()));
    QObject::connect(ui->passwordEdit,SIGNAL(textChanged(QString)),this,SLOT(setLoginPushButtonStatus()));
    // Set when closeButton clicked.
    QObject::connect(ui->closePushButton,SIGNAL(clicked()),this,SLOT(close()));

	// Load database to allUser.
	this->allUser = new UserInfo();
	allUser->init();
	
}

Login::~Login()
{
    delete ui;
}

void Login::loginSystemSlot(){
    QString userId = ui->nameLineEdit->text().trimmed();
	QString password = ui->passwordEdit->text().trimmed();
	// Encrypt password.
	QByteArray pe; pe.append(password);
	password = pe.toBase64();
	// Get UserInfo LinkedList headnode.
	UserInfoNode* node = (UserInfoNode*)this->allUser->getNode(-1);
	// Get UserInfo LinkedList first data node.
	node = (UserInfoNode*)node->getNext();

	// Find in LinkedList.
	while (node != nullptr)
	{
		// qDebug() << node->getId();
		if (node->getId() == userId.toInt() && node->getPassword() == password)
		{
			if (userId == 1000)
			{
				AdminInterface* w = new AdminInterface();
				w->setWindowTitle("ADMIN,WELCOME!");
				w->show();
			}
			else if (node->getType() == 1)
			{
				TeacherInterface* w = new TeacherInterface();
				w->setWindowTitle("Teacher:" + node->getName());
				w->show();
			}
			else
			{
				StudentInterface* w = new StudentInterface();
				w->setWindowTitle("Student:" + node->getName());
				w->show();
			}
			return;
		}
		node = (UserInfoNode*)node->getNext();
	}
	QMessageBox::warning(this, "Error", "Username or password error.");

}

void Login::setUserLineEdit(){
    // username: INT,1000~1000000000.
    // passwd: size: 6~16 (0-9,a-z)
    ui->nameLineEdit->setValidator(new QIntValidator(1000,1000000000,this));
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
    QRegExp rx;
    rx.setPattern("^[0-9|a-z|^\s]{1,16}$");
    ui->passwordEdit->setValidator(new QRegExpValidator(rx,this));
}

bool Login::checkIdAndPasswd(const QString& ID,const QString& passwd){
    if (ID == "1000"){
        AdminInterface *w = new AdminInterface();
        w->show();
    }
    else {
        StudentInterface *w = new StudentInterface();
        w->window()->setWindowTitle("Student");
        w->show();
    }
    return true;
}

void Login::setLoginPushButtonStatus(){
    QString username = ui->nameLineEdit->text();
    QString password = ui->passwordEdit->text();
    if (username.size()>3 && password.size()>5)
        ui->loginPushButton->setEnabled(true);
    else
        ui->loginPushButton->setDisabled(true);
}


