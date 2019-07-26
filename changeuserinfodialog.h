#ifndef CHANGEUSERINFODIALOG_H
#define CHANGEUSERINFODIALOG_H
//改变用户信息
#include <QDialog>
#include "userinfo.h"
namespace Ui {
class ChangeUserInfoDialog;
}

class ChangeUserInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeUserInfoDialog(UserInfoNode* user,QWidget *parent = nullptr); //需要操作的用户的节点为user.
    ~ChangeUserInfoDialog();
public slots:
	void changePassword(); //改变userNode节点用户的密码。

private:
    Ui::ChangeUserInfoDialog *ui;
	UserInfoNode* userNode = nullptr; //将参数中指针存下来
};

#endif // CHANGEUSERINFODIALOG_H
