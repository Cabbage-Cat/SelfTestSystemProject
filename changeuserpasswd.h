#ifndef CHANGEUSERPASSWD_H
#define CHANGEUSERPASSWD_H
#include "userinfo.h"
//改变用户密码的接口。
class ChangeUserpasswd
{
public:
    ChangeUserpasswd();
    static void changePasswd(UserInfoNode* node,QString newPasswd);
};

#endif // CHANGEUSERPASSWD_H
