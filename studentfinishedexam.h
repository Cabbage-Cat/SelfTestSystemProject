#ifndef STUDENTFINISHEDEXAM_H
#define STUDENTFINISHEDEXAM_H
// 存取(STUDENTID-EXAMID-SCORE)节点的链表。
#include "basiclist.h"

class StudentFinishedExam : public BasicList
{
public:
    StudentFinishedExam(int stuId);
	virtual ~StudentFinishedExam();
	bool haveExamId(int exId);
	virtual void init();
	virtual void saveAdd();
	virtual void saveDelete();
public:
	int stuId;
};

#endif // STUDENTFINISHEDEXAM_H
