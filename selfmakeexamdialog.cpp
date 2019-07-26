#include "selfmakeexamdialog.h"
#include "ui_selfmakeexamdialog.h"
#include <QIntValidator>
#include <QFile>

SelfMakeExamDialog::SelfMakeExamDialog(int* examData,int *resScore,QString fileLocation,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelfMakeExamDialog)
{
    ui->setupUi(this);
    this->examData = examData;
	this->fileLocation = fileLocation;
	this->resScore = resScore;
    // examData[0] : resScore
    // examData[1] : nowProblem
    // examData[2] : problemNum
	ui->numberLabel->setText(QString::fromLocal8Bit("第") + QString::number(examData[1]) + QString::fromLocal8Bit("题"));
	ui->scoreLabel->setText(QString::fromLocal8Bit("当前剩余分数:\n") + QString::number(examData[0]) + QString::fromLocal8Bit("/100"));
	this->setScoreLineEditStatus();
	QObject::connect(ui->confirmPushButton, SIGNAL(clicked()), this, SLOT(confirmButtonClicked()));
}

SelfMakeExamDialog::~SelfMakeExamDialog()
{
    delete ui;
}

void SelfMakeExamDialog::setScoreLineEditStatus()
{
	if (this->examData[1] == this->examData[2])
	{
		//ui->scoreLineEdit->setValidator(new QIntValidator(this->examData[0], this->examData[0], this));
		ui->scoreLineEdit->setText(QString::number(this->examData[0]));
		ui->scoreLineEdit->setDisabled(true);
	}
	else
		ui->scoreLineEdit->setValidator(new QIntValidator(0, this->examData[0], this));
}

void SelfMakeExamDialog::confirmButtonClicked()
{
	QFile* fp = new QFile(); fp->setFileName(this->fileLocation);
	if (!fp->open(QIODevice::Append | QIODevice::Text))
	{
        //qDebug() << "open error";
		return;
	}
	*(this->resScore) -= ui->scoreLineEdit->text().trimmed().toInt();
	QString scoreNum = ui->scoreLineEdit->text().trimmed()
		+ QString::fromLocal8Bit("\n");
	fp->write(scoreNum.toLocal8Bit());
	QString topic = ui->topicLineEdit->text().trimmed()
		+ QString::fromLocal8Bit("\n");
	fp->write(topic.toLocal8Bit());
	QString ans = ui->answerLineEdit->text().trimmed()
		+ QString::fromLocal8Bit("\n");
	fp->write(ans.toLocal8Bit());
	fp->close();
	this->window()->close();
}
