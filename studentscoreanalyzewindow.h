#ifndef STUDENTSCOREANALYZEWINDOW_H
#define STUDENTSCOREANALYZEWINDOW_H
// ��ʦ�����з�������ѧ���ɼ����ڡ�
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
