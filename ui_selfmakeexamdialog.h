/********************************************************************************
** Form generated from reading UI file 'selfmakeexamdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFMAKEEXAMDIALOG_H
#define UI_SELFMAKEEXAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelfMakeExamDialog
{
public:
    QLabel *scoreLabel;
    QLabel *numberLabel;
    QPushButton *confirmPushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *topicLineEdit;
    QLineEdit *answerLineEdit;
    QLineEdit *scoreLineEdit;

    void setupUi(QDialog *SelfMakeExamDialog)
    {
        if (SelfMakeExamDialog->objectName().isEmpty())
            SelfMakeExamDialog->setObjectName(QString::fromUtf8("SelfMakeExamDialog"));
        SelfMakeExamDialog->resize(400, 397);
        scoreLabel = new QLabel(SelfMakeExamDialog);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(30, 180, 71, 41));
        numberLabel = new QLabel(SelfMakeExamDialog);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(170, 10, 271, 41));
        confirmPushButton = new QPushButton(SelfMakeExamDialog);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(92, 307, 231, 51));
        label = new QLabel(SelfMakeExamDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 140, 38, 16));
        label_2 = new QLabel(SelfMakeExamDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 240, 45, 16));
        topicLineEdit = new QLineEdit(SelfMakeExamDialog);
        topicLineEdit->setObjectName(QString::fromUtf8("topicLineEdit"));
        topicLineEdit->setGeometry(QRect(110, 140, 241, 21));
        answerLineEdit = new QLineEdit(SelfMakeExamDialog);
        answerLineEdit->setObjectName(QString::fromUtf8("answerLineEdit"));
        answerLineEdit->setGeometry(QRect(110, 240, 241, 21));
        scoreLineEdit = new QLineEdit(SelfMakeExamDialog);
        scoreLineEdit->setObjectName(QString::fromUtf8("scoreLineEdit"));
        scoreLineEdit->setGeometry(QRect(110, 190, 241, 21));

        retranslateUi(SelfMakeExamDialog);

        QMetaObject::connectSlotsByName(SelfMakeExamDialog);
    } // setupUi

    void retranslateUi(QDialog *SelfMakeExamDialog)
    {
        SelfMakeExamDialog->setWindowTitle(QCoreApplication::translate("SelfMakeExamDialog", "Dialog", nullptr));
        scoreLabel->setText(QCoreApplication::translate("SelfMakeExamDialog", "\345\210\206\346\225\260:\n"
"(x/100)", nullptr));
        numberLabel->setText(QCoreApplication::translate("SelfMakeExamDialog", "\347\254\254i\351\242\230", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("SelfMakeExamDialog", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("SelfMakeExamDialog", "\351\242\230\347\233\256:", nullptr));
        label_2->setText(QCoreApplication::translate("SelfMakeExamDialog", "\347\255\224\346\241\210\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelfMakeExamDialog: public Ui_SelfMakeExamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFMAKEEXAMDIALOG_H
