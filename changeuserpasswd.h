#ifndef CHANGEUSERPASSWD_H
#define CHANGEUSERPASSWD_H
#include "userinfo.h"
//�ı��û�����Ľӿڡ�
class ChangeUserpasswd
{
public:
    ChangeUserpasswd();
    static void changePasswd(UserInfoNode* node,QString newPasswd);
};

#endif // CHANGEUSERPASSWD_H
