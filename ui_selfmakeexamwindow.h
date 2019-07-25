/********************************************************************************
** Form generated from reading UI file 'selfmakeexamwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFMAKEEXAMWINDOW_H
#define UI_SELFMAKEEXAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelfMakeExamWindow
{
public:
    QLabel *numberLabel;
    QPushButton *confirmPushButton;
    QLabel *scoreLabel;
    QLineEdit *scoreLineEdit;
    QTextEdit *topicTextEdit;
    QLineEdit *answerLineEdit;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *SelfMakeExamWindow)
    {
        if (SelfMakeExamWindow->objectName().isEmpty())
            SelfMakeExamWindow->setObjectName(QString::fromUtf8("SelfMakeExamWindow"));
        SelfMakeExamWindow->resize(369, 386);
        numberLabel = new QLabel(SelfMakeExamWindow);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(160, 10, 271, 41));
        confirmPushButton = new QPushButton(SelfMakeExamWindow);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(82, 307, 231, 51));
        scoreLabel = new QLabel(SelfMakeExamWindow);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(20, 170, 71, 41));
        scoreLineEdit = new QLineEdit(SelfMakeExamWindow);
        scoreLineEdit->setObjectName(QString::fromUtf8("scoreLineEdit"));
        scoreLineEdit->setGeometry(QRect(80, 180, 231, 21));
        topicTextEdit = new QTextEdit(SelfMakeExamWindow);
        topicTextEdit->setObjectName(QString::fromUtf8("topicTextEdit"));
        topicTextEdit->setGeometry(QRect(74, 70, 256, 71));
        answerLineEdit = new QLineEdit(SelfMakeExamWindow);
        answerLineEdit->setObjectName(QString::fromUtf8("answerLineEdit"));
        answerLineEdit->setGeometry(QRect(74, 262, 167, 21));
        label_2 = new QLabel(SelfMakeExamWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 260, 45, 16));
        label = new QLabel(SelfMakeExamWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 38, 16));

        retranslateUi(SelfMakeExamWindow);

        QMetaObject::connectSlotsByName(SelfMakeExamWindow);
    } // setupUi

    void retranslateUi(QWidget *SelfMakeExamWindow)
    {
        SelfMakeExamWindow->setWindowTitle(QCoreApplication::translate("SelfMakeExamWindow", "Form", nullptr));
        numberLabel->setText(QCoreApplication::translate("SelfMakeExamWindow", "\347\254\254i\351\242\230", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("SelfMakeExamWindow", "\347\241\256\345\256\232", nullptr));
        scoreLabel->setText(QCoreApplication::translate("SelfMakeExamWindow", "\345\210\206\346\225\260:\n"
"(x/100)", nullptr));
        label_2->setText(QCoreApplication::translate("SelfMakeExamWindow", "\347\255\224\346\241\210\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("SelfMakeExamWindow", "\351\242\230\347\233\256:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelfMakeExamWindow: public Ui_SelfMakeExamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFMAKEEXAMWINDOW_H
