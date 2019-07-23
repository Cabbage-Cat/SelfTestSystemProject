/********************************************************************************
** Form generated from reading UI file 'studentinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINTERFACE_H
#define UI_STUDENTINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInterface
{
public:
    QTreeWidget *treeWidget;
    QSplitter *splitter;
    QPushButton *showPastExamPushButton;
    QPushButton *changeInfoPushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *answerSelectExamPushButton;
    QPushButton *selfTestPushButton;
    QPushButton *beginChallegePushButton;

    void setupUi(QWidget *StudentInterface)
    {
        if (StudentInterface->objectName().isEmpty())
            StudentInterface->setObjectName(QString::fromUtf8("StudentInterface"));
        StudentInterface->resize(605, 350);
        treeWidget = new QTreeWidget(StudentInterface);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(300, 10, 256, 231));
        splitter = new QSplitter(StudentInterface);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 272, 531, 61));
        splitter->setOrientation(Qt::Horizontal);
        showPastExamPushButton = new QPushButton(splitter);
        showPastExamPushButton->setObjectName(QString::fromUtf8("showPastExamPushButton"));
        splitter->addWidget(showPastExamPushButton);
        changeInfoPushButton = new QPushButton(splitter);
        changeInfoPushButton->setObjectName(QString::fromUtf8("changeInfoPushButton"));
        splitter->addWidget(changeInfoPushButton);
        widget = new QWidget(StudentInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(31, 12, 211, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        answerSelectExamPushButton = new QPushButton(widget);
        answerSelectExamPushButton->setObjectName(QString::fromUtf8("answerSelectExamPushButton"));

        verticalLayout->addWidget(answerSelectExamPushButton);

        selfTestPushButton = new QPushButton(widget);
        selfTestPushButton->setObjectName(QString::fromUtf8("selfTestPushButton"));

        verticalLayout->addWidget(selfTestPushButton);

        beginChallegePushButton = new QPushButton(widget);
        beginChallegePushButton->setObjectName(QString::fromUtf8("beginChallegePushButton"));

        verticalLayout->addWidget(beginChallegePushButton);


        retranslateUi(StudentInterface);

        QMetaObject::connectSlotsByName(StudentInterface);
    } // setupUi

    void retranslateUi(QWidget *StudentInterface)
    {
        StudentInterface->setWindowTitle(QCoreApplication::translate("StudentInterface", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("StudentInterface", "\350\257\225\345\215\267\347\274\226\345\217\267", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("StudentInterface", "\347\217\255\347\272\247", nullptr));
        showPastExamPushButton->setText(QCoreApplication::translate("StudentInterface", "\346\237\245\347\234\213\344\273\245\345\276\200\346\210\220\347\273\251", nullptr));
        changeInfoPushButton->setText(QCoreApplication::translate("StudentInterface", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        answerSelectExamPushButton->setText(QCoreApplication::translate("StudentInterface", "\346\265\213\350\257\225\345\275\223\345\211\215\350\257\225\345\215\267", nullptr));
        selfTestPushButton->setText(QCoreApplication::translate("StudentInterface", "\350\207\252\350\241\214\346\265\213\350\257\225", nullptr));
        beginChallegePushButton->setText(QCoreApplication::translate("StudentInterface", "\351\227\257\345\205\263\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInterface: public Ui_StudentInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINTERFACE_H
