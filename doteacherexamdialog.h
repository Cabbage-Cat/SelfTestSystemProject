#ifndef DOTEACHEREXAMDIALOG_H
#define DOTEACHEREXAMDIALOG_H
// 做老师出的题/自测窗口
#include <QDialog>

namespace Ui {
class DoTeacherExamDialog;
}

class DoTeacherExamDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DoTeacherExamDialog(int* userScore,QString examData[],QWidget *parent = nullptr);
    ~DoTeacherExamDialog();
public slots:
    void confirmPushButtonClicked();

private:
    Ui::DoTeacherExamDialog *ui;
    int* userScore;
    QString ans;
    int thisProblemScore;

};

#endif // DOTEACHEREXAMDIALOG_H
