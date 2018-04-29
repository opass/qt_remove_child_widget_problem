#include <QApplication>
#include "view1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VIEW1 v1;
    v1.show();

    return a.exec();
}
