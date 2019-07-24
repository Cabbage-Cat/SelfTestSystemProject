/********************************************************************************
** Form generated from reading UI file 'pasttestinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTTESTINFO_H
#define UI_PASTTESTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pastTestInfo
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *pastTestInfo)
    {
        if (pastTestInfo->objectName().isEmpty())
            pastTestInfo->setObjectName(QString::fromUtf8("pastTestInfo"));
        pastTestInfo->resize(272, 476);
        treeWidget = new QTreeWidget(pastTestInfo);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 241, 451));

        retranslateUi(pastTestInfo);

        QMetaObject::connectSlotsByName(pastTestInfo);
    } // setupUi

    void retranslateUi(QWidget *pastTestInfo)
    {
        pastTestInfo->setWindowTitle(QCoreApplication::translate("pastTestInfo", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("pastTestInfo", "\350\200\203\350\257\225\346\210\220\347\273\251", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("pastTestInfo", "\350\200\203\350\257\225\347\274\226\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pastTestInfo: public Ui_pastTestInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTTESTINFO_H
