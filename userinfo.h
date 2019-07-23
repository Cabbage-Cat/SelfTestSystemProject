#ifndef USERINFO_H
#define USERINFO_H
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
