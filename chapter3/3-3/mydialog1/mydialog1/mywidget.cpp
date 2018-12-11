#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QDialog *dialog = new QDialog(this);
    dialog->setModal(true);
    dialog->setWindowModified(true);
    dialog->show();
//    QDialog dialog2(this);
//    dialog2.exec();
}

MyWidget::~MyWidget()
{
    delete ui;
}
