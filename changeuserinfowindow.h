#ifndef CHANGEUSERINFOWINDOW_H
#define CHANGEUSERINFOWINDOW_H

#include <QWidget>

namespace Ui {
class ChangeUserInfoWindow;
}

class ChangeUserInfoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeUserInfoWindow(QWidget *parent = nullptr);
    ~ChangeUserInfoWindow();

private:
    Ui::ChangeUserInfoWindow *ui;
};

#endif // CHANGEUSERINFOWINDOW_H
