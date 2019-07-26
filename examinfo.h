#ifndef EXAMINFO_H
#define EXAMINFO_H
//存取(EXAMID-CLASSNUMBER-FILELOCATION)节点内容的链表。
#include "basiclist.h"

class ExamInfo : public BasicList
{
public:
    ExamInfo();
	virtual ~ExamInfo();

	virtual void init();
	virtual void saveAdd();
	virtual void saveDelete();
};

#endif // EXAMINFO_H
