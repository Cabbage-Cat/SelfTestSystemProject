#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QIntValidator>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

public slots:
//  Recieve loginPushButton signal and exec.
    void loginSystemSlot();
    void setLoginPushButtonStatus();
private:
    Ui::Login *ui;
    QSqlDatabase db;
    void setUserLineEdit();
    bool checkIdAndPasswd(const QString& ID,const QString& passwd);
};

#endif // LOGIN_H
