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

    Login::db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ssorryqaq/Github/SelfTestSystemProject/SelfTestSystem/systemdata.db");
}

Login::~Login()
{
    db.close();
    delete ui;
}

void Login::loginSystemSlot(){
    QString username = ui->nameLineEdit->text();
    QString password = ui->passwordEdit->text();

    // Search database.
//    bool l = db.open();
//    QSqlQuery q;
//    q.exec("SELECT *FROM PERSONINFO;");
//    q.next();
//    qDebug() << q.value(0).toInt();
    // Test Version.

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


