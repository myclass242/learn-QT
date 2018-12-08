/********************************************************************************
** Form generated from reading UI file 'Hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_helloDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *helloDialog)
    {
        if (helloDialog->objectName().isEmpty())
            helloDialog->setObjectName(QStringLiteral("helloDialog"));
        helloDialog->resize(400, 300);
        label = new QLabel(helloDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 120, 151, 21));

        retranslateUi(helloDialog);

        QMetaObject::connectSlotsByName(helloDialog);
    } // setupUi

    void retranslateUi(QDialog *helloDialog)
    {
        helloDialog->setWindowTitle(QApplication::translate("helloDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("helloDialog", "Hello World! \344\275\240\345\245\275 QT\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helloDialog: public Ui_helloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
