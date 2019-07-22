/********************************************************************************
** Form generated from reading UI file 'studentinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINTERFACE_H
#define UI_STUDENTINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInterface
{
public:

    void setupUi(QWidget *StudentInterface)
    {
        if (StudentInterface->objectName().isEmpty())
            StudentInterface->setObjectName(QString::fromUtf8("StudentInterface"));
        StudentInterface->resize(400, 300);

        retranslateUi(StudentInterface);

        QMetaObject::connectSlotsByName(StudentInterface);
    } // setupUi

    void retranslateUi(QWidget *StudentInterface)
    {
        StudentInterface->setWindowTitle(QCoreApplication::translate("StudentInterface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInterface: public Ui_StudentInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINTERFACE_H
