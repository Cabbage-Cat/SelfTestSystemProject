#ifndef CHANGEUSERINFODIALOG_H
#define CHANGEUSERINFODIALOG_H
//�ı��û���Ϣ
#include <QDialog>
#include "userinfo.h"
namespace Ui {
class ChangeUserInfoDialog;
}

class ChangeUserInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeUserInfoDialog(UserInfoNode* user,QWidget *parent = nullptr); //��Ҫ�������û��Ľڵ�Ϊuser.
    ~ChangeUserInfoDialog();
public slots:
	void changePassword(); //�ı�userNode�ڵ��û������롣

private:
    Ui::ChangeUserInfoDialog *ui;
	UserInfoNode* userNode = nullptr; //��������ָ�������
};

#endif // CHANGEUSERINFODIALOG_H
