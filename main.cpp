#include "login.h"
#include <QApplication>
#include <QtPlugin>

//Q_IMPORT_PLUGIN(qsqlite)
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::addLibraryPath("./plugins/sqldrivers");
    Login w;
    w.show();
    return a.exec();
}
