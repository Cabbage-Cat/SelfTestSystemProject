/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QTreeWidget *treeWidget;
    QSplitter *splitter;
    QPushButton *deleteSelectedPushButton;
    QPushButton *changeSelectedUserPasswdPushButton;
    QPushButton *addUserPushButton;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName(QString::fromUtf8("AdminInterface"));
        AdminInterface->resize(630, 416);
        treeWidget = new QTreeWidget(AdminInterface);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(215, 20, 371, 351));
        splitter = new QSplitter(AdminInterface);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(50, 40, 129, 311));
        splitter->setOrientation(Qt::Vertical);
        deleteSelectedPushButton = new QPushButton(splitter);
        deleteSelectedPushButton->setObjectName(QString::fromUtf8("deleteSelectedPushButton"));
        splitter->addWidget(deleteSelectedPushButton);
        changeSelectedUserPasswdPushButton = new QPushButton(splitter);
        changeSelectedUserPasswdPushButton->setObjectName(QString::fromUtf8("changeSelectedUserPasswdPushButton"));
        splitter->addWidget(changeSelectedUserPasswdPushButton);
        addUserPushButton = new QPushButton(splitter);
        addUserPushButton->setObjectName(QString::fromUtf8("addUserPushButton"));
        splitter->addWidget(addUserPushButton);

        retranslateUi(AdminInterface);

        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("AdminInterface", "\347\224\250\346\210\267\345\257\206\347\240\201", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("AdminInterface", "\347\224\250\346\210\267ID", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("AdminInterface", "\347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        deleteSelectedPushButton->setText(QCoreApplication::translate("AdminInterface", "\345\210\240\351\231\244\345\275\223\345\211\215\347\224\250\346\210\267", nullptr));
        changeSelectedUserPasswdPushButton->setText(QCoreApplication::translate("AdminInterface", "\344\277\256\346\224\271\345\275\223\345\211\215\347\224\250\346\210\267\345\257\206\347\240\201", nullptr));
        addUserPushButton->setText(QCoreApplication::translate("AdminInterface", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
