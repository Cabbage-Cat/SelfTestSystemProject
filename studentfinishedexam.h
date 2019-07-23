#ifndef STUDENTFINISHEDEXAM_H
#define STUDENTFINISHEDEXAM_H
#include "basiclist.h"

class StudentFinishedExam : public BasicList
{
public:
    StudentFinishedExam(int stuId);
	virtual ~StudentFinishedExam();

	virtual void init();
	virtual void saveAdd();
	virtual void saveDelete();
public:
	int stuId;
};

#endif // STUDENTFINISHEDEXAM_H
