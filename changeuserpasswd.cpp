#include "changeuserpasswd.h"

ChangeUserpasswd::ChangeUserpasswd()
{

}

void ChangeUserpasswd::changePasswd(UserInfoNode* node,QString newPasswd)
{
    UserInfo* list = new UserInfo();
    list->addNode(node);
    QByteArray pe; pe.append(newPasswd);
    newPasswd = pe.toBase64();
    node->setPassword(newPasswd);
    list->saveDelete();
    list->saveAdd();
}
