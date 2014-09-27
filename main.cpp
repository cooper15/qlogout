#include "logout.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Logout w;
    w.show();

    return a.exec();
}
