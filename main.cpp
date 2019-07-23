#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::addLibraryPath("./plugins/sqldrivers");
    Login w;
    w.show();
    return a.exec();
}
