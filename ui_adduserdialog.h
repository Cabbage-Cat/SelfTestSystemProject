/********************************************************************************
** Form generated from reading UI file 'adduserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERDIALOG_H
#define UI_ADDUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_AddUserDialog
{
public:
    QLabel *label_6;
    QPushButton *confirmPushButton;
    QSplitter *splitter_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSplitter *splitter;
    QComboBox *comboBox;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *classNumberLineEdit;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QString::fromUtf8("AddUserDialog"));
        AddUserDialog->resize(430, 550);
        label_6 = new QLabel(AddUserDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 30, 72, 15));
        confirmPushButton = new QPushButton(AddUserDialog);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(70, 430, 281, 61));
        splitter_2 = new QSplitter(AddUserDialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(70, 90, 75, 311));
        splitter_2->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_2->addWidget(label_5);
        label = new QLabel(splitter_2);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_2->addWidget(label);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_2->addWidget(label_3);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter_2->addWidget(label_4);
        splitter = new QSplitter(AddUserDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(190, 90, 171, 301));
        splitter->setOrientation(Qt::Vertical);
        comboBox = new QComboBox(splitter);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        splitter->addWidget(comboBox);
        idLineEdit = new QLineEdit(splitter);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        splitter->addWidget(idLineEdit);
        passwordLineEdit = new QLineEdit(splitter);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        splitter->addWidget(passwordLineEdit);
        nameLineEdit = new QLineEdit(splitter);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        splitter->addWidget(nameLineEdit);
        classNumberLineEdit = new QLineEdit(splitter);
        classNumberLineEdit->setObjectName(QString::fromUtf8("classNumberLineEdit"));
        splitter->addWidget(classNumberLineEdit);

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QCoreApplication::translate("AddUserDialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("AddUserDialog", "\345\210\233\345\273\272\347\224\250\346\210\267", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("AddUserDialog", "\347\241\256\345\256\232\345\210\233\345\273\272", nullptr));
        label_5->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\347\261\273\345\236\213:", nullptr));
        label->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267ID:", nullptr));
        label_2->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\345\257\206\347\240\201:", nullptr));
        label_3->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\347\217\255\347\272\247:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddUserDialog", "\350\200\201\345\270\210", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddUserDialog", "\345\255\246\347\224\237", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDIALOG_H
