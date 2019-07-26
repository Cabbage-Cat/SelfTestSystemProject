#ifndef USERINFO_H
#define USERINFO_H
// 存取(ID-PASSWORD-NAME-TYPE-CLASSNUMBER)节点的链表
#include "basiclist.h"

class UserInfo : public BasicList
{
public:
    UserInfo();
	virtual ~UserInfo();

	virtual void init();
	virtual void saveAdd();
	virtual void saveDelete();
};

#endif // USERINFO_H
