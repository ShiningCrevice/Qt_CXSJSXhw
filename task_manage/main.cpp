#include "main_scene.h"
#include <vector>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_scene w;
    w.show();
    return a.exec();
}
