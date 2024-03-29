#ifndef STUDENTINTERFACE_H
#define STUDENTINTERFACE_H
// 学生接口
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
    void showAnswerTestPaper();
	void showPastExams();
    void showTestSelf();
	void showPersonInfoChange();

private:
    Ui::StudentInterface *ui;

	UserInfoNode* thisUser;
    //UserInfo* thisUserChangeInfo = nullptr; // 用于存储用户进行的信息修改

	ExamInfo* unfinishedExams = nullptr; // 储存当前用户未完成的测试
	ExamInfo* allExams = nullptr; // 储存所有测试

    StudentFinishedExam* finishedExams = nullptr; // 储存当前用户已完成的测试
    //StudentFinishedExam* nowFinishedExams = nullptr; // 储存当前用户本次完成的测试,后续将完成的测试添加到数据库中
	QString generateIntExpr(int num, int& res);
	QString generateFloatExpr(int num, double& res);
	double generateRandDouble(double minValue, double maxValue);

	QMap<QChar, int> operatorPriority;

};

#endif // STUDENTINTERFACE_H
