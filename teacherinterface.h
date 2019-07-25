#ifndef TEACHERINTERFACE_H
#define TEACHERINTERFACE_H
#include <QWidget>
#include "userinfo.h"
#include "studentfinishedexam.h"
#include "examinfo.h"
#include "changeuserinfowindow.h"
namespace Ui {
class TeacherInterface;
}

class TeacherInterface : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherInterface(UserInfoNode* userInfo,QWidget *parent = nullptr);
    ~TeacherInterface();
public slots:
    void showAnalyzeScore();
    void showPersonInfoChange();
    void showSelfMakeExam();
private:
	UserInfoNode* thisUser = nullptr;
    
    ExamInfo* newExam = nullptr;
    Ui::TeacherInterface *ui;
};

#endif // TEACHERINTERFACE_H
