#include <QtGui/QApplication>
#include "systemmonitor.h"
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SystemMonitor w;
    w.show();

    return a.exec();
}
