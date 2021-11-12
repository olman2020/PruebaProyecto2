#include "mainwindow.h"
#include "grafowindow.h"
#include <iostream>
#include <windows.h>
#include "grafo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QObject::connect(&w,SIGNAL());
    w.show();
    return a.exec();







}
