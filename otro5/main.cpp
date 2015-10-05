
#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(puzzle);

    QApplication app(argc, argv);
    MainWindow window;
    //window.openImage("/home/usuario/Documentos/java123/otro5/dropsite-example.png");  //window.openImage(":/images/example.jpg");
    //window.openImage("/home/usuario/Documentos/java123/otro5/misti_volcano.jpg");  //window.openImage(":/images/example.jpg");
    //example.jpg
    window.show();
    return app.exec();
}
