#ifndef STUDENTSCOREANALYZEWINDOW_H
#define STUDENTSCOREANALYZEWINDOW_H
// 教师界面中分析本班学生成绩窗口。
#include <QWidget>
#include "userinfo.h"
#include "studentfinishedexam.h"
#include <QTreeWidget>
namespace Ui {
class StudentScoreAnalyzeWindow;
}

class StudentScoreAnalyzeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StudentScoreAnalyzeWindow(int classNumber,QWidget *parent = nullptr);
    ~StudentScoreAnalyzeWindow();
public slots:
    void setExamComment(QTreeWidgetItem* item,int column);
private:
    Ui::StudentScoreAnalyzeWindow *ui;
	UserInfo* allUser = nullptr;
};

#endif // STUDENTSCOREANALYZEWINDOW_H
