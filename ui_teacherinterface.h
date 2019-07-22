/********************************************************************************
** Form generated from reading UI file 'teacherinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERINTERFACE_H
#define UI_TEACHERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherInterface
{
public:

    void setupUi(QWidget *TeacherInterface)
    {
        if (TeacherInterface->objectName().isEmpty())
            TeacherInterface->setObjectName(QString::fromUtf8("TeacherInterface"));
        TeacherInterface->resize(400, 300);

        retranslateUi(TeacherInterface);

        QMetaObject::connectSlotsByName(TeacherInterface);
    } // setupUi

    void retranslateUi(QWidget *TeacherInterface)
    {
        TeacherInterface->setWindowTitle(QCoreApplication::translate("TeacherInterface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherInterface: public Ui_TeacherInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERINTERFACE_H
