#ifndef PASTEXAMINFOWINDOW_H
#define PASTEXAMINFOWINDOW_H
// 显示过去考试信息的窗口
#include "studentfinishedexam.h"
#include <QWidget>

namespace Ui {
class PastExamInfoWindow;
}

class PastExamInfoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PastExamInfoWindow(StudentFinishedExam* finishedExams,QWidget *parent = nullptr);
    ~PastExamInfoWindow();

private:
    Ui::PastExamInfoWindow *ui;
};

#endif // PASTEXAMINFOWINDOW_H
