#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QWidget>

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

private:
    Ui::AdminInterface *ui;
};

#endif // ADMININTERFACE_H
