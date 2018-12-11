#include "mydialog.h"
#include "ui_mydialog.h"
#include <QDialog>

MyDialog::MyDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
//    connect(ui->showChildButton, &QPushButton::clicked, this, &MyDialog::on_showChildButton_clicked);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_showChildButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}
