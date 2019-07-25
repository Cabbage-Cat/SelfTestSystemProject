#ifndef ADDUSERDIALOG_H
#define ADDUSERDIALOG_H

#include <QDialog>
#include "userinfo.h"
namespace Ui {
class AddUserDialog;
}

class AddUserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddUserDialog(UserInfo* allusers,QWidget *parent = nullptr);
    ~AddUserDialog();
public slots:
    void setConfirmPushButtonStatus();
    void confirmAddUser();
private:
    Ui::AddUserDialog *ui;
    UserInfo* allUsers;
};

#endif // ADDUSERDIALOG_H
