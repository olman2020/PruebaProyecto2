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

    Grafo G;
    G.Inicializa();
    //int opc;

    G.InsertaVertice("TIJ");
    G.InsertaVertice("MTY");
    G.InsertaVertice("MZT");
    G.InsertaVertice("BJX");
    G.InsertaVertice("GDL");
    G.InsertaVertice("SAN");
    G.InsertaVertice("TAM");
    G.InsertaVertice("MEX");
    G.InsertaVertice("CUN");
    G.InsertaVertice("MID");

    G.InsertaArista(G.GetVertice("TIJ"), G.GetVertice("MTY"), 800);
    G.InsertaArista(G.GetVertice("MZT"), G.GetVertice("TIJ"), 400);
    G.InsertaArista(G.GetVertice("MZT"), G.GetVertice("BJX"), 300);
    G.InsertaArista(G.GetVertice("MTY"), G.GetVertice("BJX"), 700);
    G.InsertaArista(G.GetVertice("BJX"), G.GetVertice("SAN"), 900);
    G.InsertaArista(G.GetVertice("BJX"), G.GetVertice("TAM"), 400);
    G.InsertaArista(G.GetVertice("BJX"), G.GetVertice("MEX"), 350);
    G.InsertaArista(G.GetVertice("GDL"), G.GetVertice("MZT"), 500);
    G.InsertaArista(G.GetVertice("GDL"), G.GetVertice("MTY"), 450);
    G.InsertaArista(G.GetVertice("GDL"), G.GetVertice("BJX"), 250);
    G.InsertaArista(G.GetVertice("GDL"), G.GetVertice("MEX"), 500);
    G.InsertaArista(G.GetVertice("SAN"), G.GetVertice("MID"), 1200);
    G.InsertaArista(G.GetVertice("TAM"), G.GetVertice("MID"), 450);
    G.InsertaArista(G.GetVertice("MEX"), G.GetVertice("MID"), 450);
    G.InsertaArista(G.GetVertice("MEX"), G.GetVertice("CUN"), 650);
    G.InsertaArista(G.GetVertice("CUN"), G.GetVertice("GDL"), 650);


}
