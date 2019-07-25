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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherInterface
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *analyzeScorePushButton;
    QPushButton *selfMakeExamPushButton;
    QLabel *teacherInfoLabel;
    QPushButton *changeInfoPushButton;

    void setupUi(QWidget *TeacherInterface)
    {
        if (TeacherInterface->objectName().isEmpty())
            TeacherInterface->setObjectName(QString::fromUtf8("TeacherInterface"));
        TeacherInterface->resize(345, 380);
        layoutWidget = new QWidget(TeacherInterface);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(41, 57, 261, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        analyzeScorePushButton = new QPushButton(layoutWidget);
        analyzeScorePushButton->setObjectName(QString::fromUtf8("analyzeScorePushButton"));

        verticalLayout->addWidget(analyzeScorePushButton);

        selfMakeExamPushButton = new QPushButton(layoutWidget);
        selfMakeExamPushButton->setObjectName(QString::fromUtf8("selfMakeExamPushButton"));

        verticalLayout->addWidget(selfMakeExamPushButton);

        teacherInfoLabel = new QLabel(TeacherInterface);
        teacherInfoLabel->setObjectName(QString::fromUtf8("teacherInfoLabel"));
        teacherInfoLabel->setGeometry(QRect(41, 31, 261, 16));
        changeInfoPushButton = new QPushButton(TeacherInterface);
        changeInfoPushButton->setObjectName(QString::fromUtf8("changeInfoPushButton"));
        changeInfoPushButton->setGeometry(QRect(40, 300, 259, 23));

        retranslateUi(TeacherInterface);

        QMetaObject::connectSlotsByName(TeacherInterface);
    } // setupUi

    void retranslateUi(QWidget *TeacherInterface)
    {
        TeacherInterface->setWindowTitle(QCoreApplication::translate("TeacherInterface", "Form", nullptr));
        analyzeScorePushButton->setText(QCoreApplication::translate("TeacherInterface", "\347\217\255\347\272\247\346\210\220\347\273\251\345\210\206\346\236\220", nullptr));
        selfMakeExamPushButton->setText(QCoreApplication::translate("TeacherInterface", "\350\207\252\350\241\214\345\207\272\345\215\267\345\271\266\344\270\213\345\217\221", nullptr));
        teacherInfoLabel->setText(QCoreApplication::translate("TeacherInterface", "\346\225\231\345\270\210\357\274\232xxxx  \347\217\255\347\272\247\345\217\267:xxxx", nullptr));
        changeInfoPushButton->setText(QCoreApplication::translate("TeacherInterface", "\346\233\264\346\224\271\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherInterface: public Ui_TeacherInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERINTERFACE_H
