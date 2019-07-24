#ifndef STUDENTINTERFACE_H
#define STUDENTINTERFACE_H

#include <QWidget>
#include <QTreeWidget>
#include "examinfo.h"
#include "studentfinishedexam.h"
#include "userinfo.h"
namespace Ui {
class StudentInterface;
}

class StudentInterface : public QWidget
{
    Q_OBJECT

public:
    explicit StudentInterface(UserInfoNode* node,QWidget *parent = nullptr);
    ~StudentInterface();
public slots:
	void showUnfinishedExams();
	void answerTestPaper();
	void showPastExams();
	void testSelf();
	void showPersonInfoChange();

private:
    Ui::StudentInterface *ui;

	UserInfoNode* thisUser;
	UserInfo* thisUserChangeInfo = nullptr; // ���ڴ洢�û����е���Ϣ�޸�

	ExamInfo* unfinishedExams = nullptr; // ���浱ǰ�û�δ��ɵĲ���
	ExamInfo* allExams = nullptr; // �������в���

	StudentFinishedExam* finishedExams = nullptr; // ���浱ǰ�û�����ɵĲ���
	StudentFinishedExam* nowFinishedExams = nullptr; // ���浱ǰ�û�������ɵĲ���,��������ɵĲ�����ӵ����ݿ���
};

#endif // STUDENTINTERFACE_H
