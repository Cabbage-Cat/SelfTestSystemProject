#ifndef ADDUSERDIALOG_H
#define ADDUSERDIALOG_H
//添加用户对话框
#include <QDialog>
#include "userinfo.h"
namespace Ui {
	class AddUserDialog;
}

class AddUserDialog : public QDialog
{
	Q_OBJECT

public:
	explicit AddUserDialog(UserInfo* allusers, QWidget* parent = nullptr); //构建函数传入全部用户信息的指针
	~AddUserDialog();
public slots:
	void setConfirmPushButtonStatus(); //设置确定按钮的可用状态
	void confirmAddUser(); //当确认按钮被单击后执行添加用户
private:
	Ui::AddUserDialog* ui;
	UserInfo* allUsers; //存取指向全部用户信息的指针
};

#endif // ADDUSERDIALOG_H
