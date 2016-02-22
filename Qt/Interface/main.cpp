#include "maxsomme.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MaxSomme w;
    w.show();

    return a.exec();
}
