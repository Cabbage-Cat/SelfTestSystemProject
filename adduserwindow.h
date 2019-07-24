#ifndef ADDUSERWINDOW_H
#define ADDUSERWINDOW_H

#include <QWidget>

namespace Ui {
class AddUserWindow;
}

class AddUserWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserWindow(QWidget *parent = nullptr);
    ~AddUserWindow();

private:
    Ui::AddUserWindow *ui;
};

#endif // ADDUSERWINDOW_H
