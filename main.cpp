#include "logout.h"
#include <QApplication>
#include <QStyle>
#include <QDesktopWidget>
#include <QStyleFactory>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Logout w;
    w.setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            w.size(),
            qApp->desktop()->availableGeometry()
        ));
    QApplication::setStyle(QStyleFactory::create("gtk+"));
    w.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    w.setMinimumSize(440,90);
    w.setMaximumSize(440,90);
    w.show();

    return a.exec();
}
