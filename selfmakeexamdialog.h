#ifndef SELFMAKEEXAMDIALOG_H
#define SELFMAKEEXAMDIALOG_H
// 教师出题的窗口
#include <QDialog>

namespace Ui {
class SelfMakeExamDialog;
}

class SelfMakeExamDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelfMakeExamDialog(int* examData, int* resScore,QString fileLocation,QWidget *parent = nullptr);
    // examData[0] : resScore
    // examData[1] : nowProblem
    // examData[2] : problemNum
    ~SelfMakeExamDialog();
public slots:
	void confirmButtonClicked();
private:
    Ui::SelfMakeExamDialog *ui;
    int* examData = nullptr;
	QString fileLocation;
	int* resScore = nullptr;
	void setScoreLineEditStatus();
};

#endif // SELFMAKEEXAMDIALOG_H
