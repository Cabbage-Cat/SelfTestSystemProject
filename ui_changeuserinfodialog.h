/********************************************************************************
** Form generated from reading UI file 'changeuserinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEUSERINFODIALOG_H
#define UI_CHANGEUSERINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeUserInfoDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *oldPassworLineEdit;
    QLineEdit *newPasswordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QPushButton *confirmPushButton;

    void setupUi(QDialog *ChangeUserInfoDialog)
    {
        if (ChangeUserInfoDialog->objectName().isEmpty())
            ChangeUserInfoDialog->setObjectName(QString::fromUtf8("ChangeUserInfoDialog"));
        ChangeUserInfoDialog->resize(400, 300);
        layoutWidget = new QWidget(ChangeUserInfoDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 259, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        oldPassworLineEdit = new QLineEdit(layoutWidget);
        oldPassworLineEdit->setObjectName(QString::fromUtf8("oldPassworLineEdit"));

        verticalLayout_2->addWidget(oldPassworLineEdit);

        newPasswordLineEdit = new QLineEdit(layoutWidget);
        newPasswordLineEdit->setObjectName(QString::fromUtf8("newPasswordLineEdit"));

        verticalLayout_2->addWidget(newPasswordLineEdit);

        confirmPasswordLineEdit = new QLineEdit(layoutWidget);
        confirmPasswordLineEdit->setObjectName(QString::fromUtf8("confirmPasswordLineEdit"));

        verticalLayout_2->addWidget(confirmPasswordLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        confirmPushButton = new QPushButton(ChangeUserInfoDialog);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(130, 180, 93, 41));

        retranslateUi(ChangeUserInfoDialog);

        QMetaObject::connectSlotsByName(ChangeUserInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeUserInfoDialog)
    {
        ChangeUserInfoDialog->setWindowTitle(QCoreApplication::translate("ChangeUserInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangeUserInfoDialog", "\345\216\237\345\257\206\347\240\201:", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeUserInfoDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeUserInfoDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("ChangeUserInfoDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeUserInfoDialog: public Ui_ChangeUserInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEUSERINFODIALOG_H
