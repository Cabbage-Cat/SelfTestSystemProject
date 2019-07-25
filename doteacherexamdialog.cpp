#include "doteacherexamdialog.h"
#include "ui_doteacherexamdialog.h"
#include <QMessageBox>
DoTeacherExamDialog::DoTeacherExamDialog(int* userScore,QString examData[],QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoTeacherExamDialog)
{
    ui->setupUi(this);
    this->userScore = userScore;

    connect(ui->confirmPushButton,SIGNAL(clicked()),this,
            SLOT(confirmPushButtonClicked()));
    ui->numberLabel->setText("分数: " + examData[0]);
    ui->topicTextEdit->setText(examData[1]);
    this->ans = examData[2].trimmed();
    this->thisProblemScore = examData[0].toInt();
}

void DoTeacherExamDialog::confirmPushButtonClicked()
{
    if (ui->answerLineEdit->text().trimmed() != this->ans)
    {
        QMessageBox::warning(this,"答案错误","答案错误，正确答案为:" + this->ans);
        this->window()->close();
    }
    else
    {
        *(this->userScore) += this->thisProblemScore;
        this->window()->close();
    }
}

DoTeacherExamDialog::~DoTeacherExamDialog()
{
    delete ui;
}
