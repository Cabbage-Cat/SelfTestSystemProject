#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

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
	void deleteSelectUser();
	void changeSelectUserInfo();
	void addUser();
private:
    Ui::AdminInterface *ui;
	UserInfo* allUser = nullptr;
	UserInfo* modifyUser = nullptr;
	void readAllUser();
};

#endif // ADMININTERFACE_H
