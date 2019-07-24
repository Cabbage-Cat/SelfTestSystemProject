#ifndef CHANGEUSERINFOWINDOW_H
#define CHANGEUSERINFOWINDOW_H

#include <QWidget>
#include "userinfo.h"
namespace Ui {
class ChangeUserInfoWindow;
}

class ChangeUserInfoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeUserInfoWindow(UserInfoNode* user,QWidget *parent = nullptr);
    ~ChangeUserInfoWindow();
public slots:
    void changePassword();

private:
    Ui::ChangeUserInfoWindow *ui;
    UserInfoNode* userNode = nullptr;
};

#endif // CHANGEUSERINFOWINDOW_H
