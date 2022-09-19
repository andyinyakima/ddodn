#include "ddodn.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ddodn w;
    w.show();
    return a.exec();
}
