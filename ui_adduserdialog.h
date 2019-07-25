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
    QPushButton *confirmPushButton;
    QLabel *label_4;
    QSplitter *splitter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *classNumberLineEdit;
    QSplitter *splitter_2;
    QComboBox *comboBox;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QString::fromUtf8("AddUserDialog"));
        AddUserDialog->resize(400, 471);
        confirmPushButton = new QPushButton(AddUserDialog);
        confirmPushButton->setObjectName(QString::fromUtf8("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(50, 360, 291, 81));
        label_4 = new QLabel(AddUserDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 260, 75, 83));
        splitter = new QSplitter(AddUserDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(60, 10, 75, 261));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        classNumberLineEdit = new QLineEdit(AddUserDialog);
        classNumberLineEdit->setObjectName(QString::fromUtf8("classNumberLineEdit"));
        classNumberLineEdit->setGeometry(QRect(180, 270, 171, 80));
        splitter_2 = new QSplitter(AddUserDialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(180, 10, 171, 251));
        splitter_2->setOrientation(Qt::Vertical);
        comboBox = new QComboBox(splitter_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        splitter_2->addWidget(comboBox);
        idLineEdit = new QLineEdit(splitter_2);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        splitter_2->addWidget(idLineEdit);
        passwordLineEdit = new QLineEdit(splitter_2);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        splitter_2->addWidget(passwordLineEdit);

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QCoreApplication::translate("AddUserDialog", "Dialog", nullptr));
        confirmPushButton->setText(QCoreApplication::translate("AddUserDialog", "\347\241\256\345\256\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\347\217\255\347\272\247\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267ID\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddUserDialog", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddUserDialog", "\350\200\201\345\270\210", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddUserDialog", "\345\255\246\347\224\237", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDIALOG_H
