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

    // Set when loginButton clicked.
    QObject::connect(ui->loginPushButton,SIGNAL(clicked()),this,SLOT(loginSystemSlot()));

    // Set when closeButton clicked.
    QObject::connect(ui->closePushButton,SIGNAL(clicked()),this,SLOT(close()));

}

Login::~Login()
{
    delete ui;
}

void Login::loginSystemSlot(){

    // Get user input user data.
    QString username = ui->nameLineEdit->text();
    QString password = ui->passwordEdit->text();

    // Search database.

    // Test Version.
    if (username == "root"){
        AdminInterface *w = new AdminInterface();
        w->show();
    }
    else {
        StudentInterface *w = new StudentInterface();
        w->window()->setWindowTitle("Student");
        w->show();

        qDebug("STUDENT");
    }
}
