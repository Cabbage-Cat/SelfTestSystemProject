#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H
//管理员界面
#include <QWidget>
#include "userinfo.h"
#include "changeuserinfodialog.h"

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();
public slots:
	void deleteSelectUser(); //删除TreeWidget中选中的节点的用户
	void changeSelectUserInfo(); //改变TreeWidget中选中的节点的用户信息
	void addUser(); //添加用户
private:
    Ui::AdminInterface *ui;
	UserInfo* allUser = nullptr; //存取所有用户信息的指针
	UserInfo* modifyUser = nullptr; //存取改变的用户的信息的指针
	void readAllUser(); //重新读取数据库中全部的用户信息
};

#endif // ADMININTERFACE_H
