/********************************************************************************
** Form generated from reading UI file 'pastexaminfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTEXAMINFOWINDOW_H
#define UI_PASTEXAMINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PastExamInfoWindow
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *PastExamInfoWindow)
    {
        if (PastExamInfoWindow->objectName().isEmpty())
            PastExamInfoWindow->setObjectName(QString::fromUtf8("PastExamInfoWindow"));
        PastExamInfoWindow->resize(297, 501);
        treeWidget = new QTreeWidget(PastExamInfoWindow);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 271, 471));

        retranslateUi(PastExamInfoWindow);

        QMetaObject::connectSlotsByName(PastExamInfoWindow);
    } // setupUi

    void retranslateUi(QWidget *PastExamInfoWindow)
    {
        PastExamInfoWindow->setWindowTitle(QCoreApplication::translate("PastExamInfoWindow", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PastExamInfoWindow", "\346\265\213\350\257\225\346\210\220\347\273\251", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PastExamInfoWindow", "\346\265\213\350\257\225\347\274\226\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PastExamInfoWindow: public Ui_PastExamInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTEXAMINFOWINDOW_H
