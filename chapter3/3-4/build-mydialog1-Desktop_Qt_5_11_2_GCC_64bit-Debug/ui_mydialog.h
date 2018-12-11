/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLabel *label;
    QPushButton *showChildButton;

    void setupUi(QWidget *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QStringLiteral("MyDialog"));
        MyDialog->resize(400, 300);
        label = new QLabel(MyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 50, 161, 20));
        showChildButton = new QPushButton(MyDialog);
        showChildButton->setObjectName(QStringLiteral("showChildButton"));
        showChildButton->setGeometry(QRect(30, 20, 111, 25));

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QWidget *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "MyDialog", nullptr));
        label->setText(QApplication::translate("MyDialog", "I'm primitive window", nullptr));
        showChildButton->setText(QApplication::translate("MyDialog", "show window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
