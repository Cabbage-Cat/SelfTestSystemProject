#ifndef TEACHERINTERFACE_H
#define TEACHERINTERFACE_H

#include <QWidget>

namespace Ui {
class TeacherInterface;
}

class TeacherInterface : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherInterface(QWidget *parent = nullptr);
    ~TeacherInterface();

private:
    Ui::TeacherInterface *ui;
};

#endif // TEACHERINTERFACE_H
