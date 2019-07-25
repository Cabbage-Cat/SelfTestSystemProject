/********************************************************************************
** Form generated from reading UI file 'doteacherexamdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOTEACHEREXAMDIALOG_H
#define UI_DOTEACHEREXAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DoTeacherExamDialog
{
public:
    QSplitter *splitter_2;
    QLabel *label;
    QLabel *label_2;
    QSplitter *splitter;
    QTextEdit *topicTextEdit;
    QLineEdit *answerLineEdit;
    QLabel *numberLabel;
    QPushButton *confirmPushButton;

    void setupUi(QDialog *DoTeacherExamDialog)
    {
        if (DoTeacherExamDialog->objectName().isEmpty())
            DoTeacherExamDialog->setObjectName(QString::fromUtf8("DoTeacherExamDialog"));
        DoTeacherExamDialog->resize(409, 368);
        splitter_2 = new QSplitter(DoTeacherExamDialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(38, 133, 45, 171));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_2->addWidget(label);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        splitter = new QSplitter(DoTeacherExamDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(92, 63, 256, 213));
        splitter->setOrientation(Qt::Vertical);
        topicTextEdit = new QTextEdit(splitter);
        topicTextEdit->setObjectName(QString::fromUtf8("topicTextEdit"));
        topicTextEdit->setEnabled(false);
        splitter->addWidget(topicTextEdit);
        answerLineEdit = new QLineEdit(splitter);
        answerLineEdit->setObjectName(QString::fromUtf8("answerLineEdit"));
        splitter->addWidget(answerLineEdit);
        numberLabel = new QLabel(DoTeacherExamDialog);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(90, 13, 271, 41));
        confirmPushButton = new QPushButton(DoTeacherExamDialog);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(100, 300, 231, 51));

        retranslateUi(DoTeacherExamDialog);

        QMetaObject::connectSlotsByName(DoTeacherExamDialog);
    } // setupUi

    void retranslateUi(QDialog *DoTeacherExamDialog)
    {
        DoTeacherExamDialog->setWindowTitle(QCoreApplication::translate("DoTeacherExamDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DoTeacherExamDialog", "\351\242\230\347\233\256:", nullptr));
        label_2->setText(QCoreApplication::translate("DoTeacherExamDialog", "\347\255\224\346\241\210\357\274\232", nullptr));
        numberLabel->setText(QCoreApplication::translate("DoTeacherExamDialog", "\347\254\254i\351\242\230        \345\210\206\346\225\260\357\274\232", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("DoTeacherExamDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoTeacherExamDialog: public Ui_DoTeacherExamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOTEACHEREXAMDIALOG_H
