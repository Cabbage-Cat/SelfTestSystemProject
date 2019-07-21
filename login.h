#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

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
private:
    Ui::Login *ui;
};

#endif // LOGIN_H
