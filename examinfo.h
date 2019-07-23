#ifndef EXAMINFO_H
#define EXAMINFO_H
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
