#ifndef SELFMAKEEXAMWINDOW_H
#define SELFMAKEEXAMWINDOW_H

#include <QWidget>

namespace Ui {
class SelfMakeExamWindow;
}

class SelfMakeExamWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SelfMakeExamWindow(QWidget *parent = nullptr);
    ~SelfMakeExamWindow();

private:
    Ui::SelfMakeExamWindow *ui;
};

#endif // SELFMAKEEXAMWINDOW_H
