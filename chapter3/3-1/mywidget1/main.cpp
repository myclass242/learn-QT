#include <QWidget>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto widget = new QWidget(nullptr, Qt::Dialog | Qt::FramelessWindowHint);
    widget->setWindowTitle(QObject::tr("I am a widget"));
    //widget->resize(300, 300);

    auto label = new QLabel(nullptr, Qt::SplashScreen | Qt::WindowStaysOnTopHint);
    label->setWindowTitle(QObject::tr("I am a label"));
    label->setText(QObject::tr("Label:I am a window"));
    label->resize(180, 20);

    auto label2 = new QLabel(widget);
    //label2->setWindowTitle(QObject::tr("I am part of widget"));
    label2->setText(QObject::tr("I am part of widget"));
    label2->resize(250, 20);

    widget->show();
    label->show();
    //label2->show();
    auto ret = a.exec();
    delete widget;
    delete label;
    //delete label2;

    return ret;
}
