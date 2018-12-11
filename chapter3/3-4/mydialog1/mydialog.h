#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QWidget>

namespace Ui {
class MyDialog;
}

class MyDialog : public QWidget
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = nullptr);
    ~MyDialog();

private:
    Ui::MyDialog *ui;
public slots:
    void on_showChildButton_clicked();
};

#endif // MYDIALOG_H
