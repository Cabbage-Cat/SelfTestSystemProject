#ifndef STUDENTSCOREANALYZEWINDOW_H
#define STUDENTSCOREANALYZEWINDOW_H

#include <QWidget>
#include "userinfo.h"
#include "studentfinishedexam.h"
namespace Ui {
class StudentScoreAnalyzeWindow;
}

class StudentScoreAnalyzeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StudentScoreAnalyzeWindow(int classNumber,QWidget *parent = nullptr);
    ~StudentScoreAnalyzeWindow();

private:
    Ui::StudentScoreAnalyzeWindow *ui;
	UserInfo* allUser = nullptr;
};

#endif // STUDENTSCOREANALYZEWINDOW_H
