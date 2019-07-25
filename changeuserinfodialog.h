#ifndef CHANGEUSERINFODIALOG_H
#define CHANGEUSERINFODIALOG_H

#include <QDialog>
#include "userinfo.h"
namespace Ui {
class ChangeUserInfoDialog;
}

class ChangeUserInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeUserInfoDialog(UserInfoNode* user,QWidget *parent = nullptr);
    ~ChangeUserInfoDialog();
public slots:
	void changePassword();

private:
    Ui::ChangeUserInfoDialog *ui;
	UserInfoNode* userNode = nullptr;
};

#endif // CHANGEUSERINFODIALOG_H
