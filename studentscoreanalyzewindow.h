#ifndef STUDENTSCOREANALYZEWINDOW_H
#define STUDENTSCOREANALYZEWINDOW_H

#include <QWidget>

namespace Ui {
class StudentScoreAnalyzeWindow;
}

class StudentScoreAnalyzeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StudentScoreAnalyzeWindow(QWidget *parent = nullptr);
    ~StudentScoreAnalyzeWindow();

private:
    Ui::StudentScoreAnalyzeWindow *ui;
};

#endif // STUDENTSCOREANALYZEWINDOW_H
