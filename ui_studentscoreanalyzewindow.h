/********************************************************************************
** Form generated from reading UI file 'studentscoreanalyzewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSCOREANALYZEWINDOW_H
#define UI_STUDENTSCOREANALYZEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentScoreAnalyzeWindow
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *StudentScoreAnalyzeWindow)
    {
        if (StudentScoreAnalyzeWindow->objectName().isEmpty())
            StudentScoreAnalyzeWindow->setObjectName(QString::fromUtf8("StudentScoreAnalyzeWindow"));
        StudentScoreAnalyzeWindow->resize(400, 472);
        treeWidget = new QTreeWidget(StudentScoreAnalyzeWindow);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 381, 411));

        retranslateUi(StudentScoreAnalyzeWindow);

        QMetaObject::connectSlotsByName(StudentScoreAnalyzeWindow);
    } // setupUi

    void retranslateUi(QWidget *StudentScoreAnalyzeWindow)
    {
        StudentScoreAnalyzeWindow->setWindowTitle(QCoreApplication::translate("StudentScoreAnalyzeWindow", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("StudentScoreAnalyzeWindow", "\346\265\213\350\257\225\346\210\220\347\273\251", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("StudentScoreAnalyzeWindow", "\346\265\213\350\257\225\347\274\226\345\217\267", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("StudentScoreAnalyzeWindow", "\345\255\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentScoreAnalyzeWindow: public Ui_StudentScoreAnalyzeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSCOREANALYZEWINDOW_H
