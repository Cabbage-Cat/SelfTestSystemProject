#ifndef STUDENTINTERFACE_H
#define STUDENTINTERFACE_H

#include <QWidget>

namespace Ui {
class StudentInterface;
}

class StudentInterface : public QWidget
{
    Q_OBJECT

public:
    explicit StudentInterface(QWidget *parent = nullptr);
    ~StudentInterface();

private:
    Ui::StudentInterface *ui;
};

#endif // STUDENTINTERFACE_H
