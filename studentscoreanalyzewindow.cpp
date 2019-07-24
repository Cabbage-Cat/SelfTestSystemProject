#include "studentscoreanalyzewindow.h"
#include "ui_studentscoreanalyzewindow.h"

StudentScoreAnalyzeWindow::StudentScoreAnalyzeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentScoreAnalyzeWindow)
{
    ui->setupUi(this);
}

StudentScoreAnalyzeWindow::~StudentScoreAnalyzeWindow()
{
    delete ui;
}
