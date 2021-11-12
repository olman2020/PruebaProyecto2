#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grafowindow.h"
#include "grafo.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap g5("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo9.png");
    ui->label_2->setPixmap(g5);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_crearBoton_clicked()
{
    Grafo G;
    G.Inicializa();


    srand(time(NULL));
    vector<string> str_vec = {"AL", "AK","AZ", "AR","CA","CO","CT","FL","IL","WA","IN","KS","LA","MS"};

    int Ram1 = rand() % 14;
    int Ram2 = rand() % 13;
    int Ram3 = rand() % 12;
    int Ram4 = rand() % 11;
    int Ram5 = rand() % 10;
    int Ram6 = rand() % 9;
    int Ram7 = rand() % 8;
    int Ram8 = rand() % 7;
    int Ram9 = rand() %6;
    int Ram10 = rand() %5;

    string E1 = str_vec[Ram1];
    str_vec.erase(str_vec.begin()+(Ram1));
    string E2 = str_vec[Ram2];
    str_vec.erase(str_vec.begin()+(Ram2));
    string E3 = str_vec[Ram3];
    str_vec.erase(str_vec.begin()+(Ram3));
    string E4 = str_vec[Ram4];
    str_vec.erase(str_vec.begin()+(Ram4));
    string E5 = str_vec[Ram5];
    str_vec.erase(str_vec.begin()+(Ram5));
    string E6 = str_vec[Ram6];
    str_vec.erase(str_vec.begin()+(Ram6));
    string E7 = str_vec[Ram7];
    str_vec.erase(str_vec.begin()+(Ram7));
    string E8 = str_vec[Ram8];
    str_vec.erase(str_vec.begin()+(Ram8));
    string E9 = str_vec[Ram9];
    str_vec.erase(str_vec.begin()+(Ram9));
    string E10 = str_vec[Ram10];

    int A1 = 50+rand()%(100-1);
    int A2 = 50+rand()%(100-1);
    int A3 = 50+rand()%(100-1);
    int A4 = 50+rand()%(100-1);
    int A5 = 50+rand()%(100-1);
    int A6 = 50+rand()%(100-1);
    int A7 = 50+rand()%(100-1);
    int A8 = 50+rand()%(100-1);
    int A9 = 50+rand()%(100-1);
    int A10 = 50+rand()%(100-1);
    int A11 = 50+rand()%(100-1);
    int A12 = 50+rand()%(100-1);
    int A13 = 50+rand()%(100-1);
    int A14 = 50+rand()%(100-1);
    int A15 = 50+rand()%(100-1);
    int A16 = 50+rand()%(100-1);
    int A17 = 50+rand()%(100-1);
    int A19 = 50+rand()%(100-1);
    int A20 = 50+rand()%(100-1);

    QString tgrafo = ui->cantidad->text();
    long int tipo = tgrafo.toInt();
    switch(tipo)
    {
    case 4: {
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E4), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E1), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E1), A5);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E3), A6);

        QPixmap g4("C:/Users/Isaac/Documents/GitHub/PruebaProyecto2/prueba/Img/grafo4.png");
        //QPixmap g4("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo4.png");
        ui->label_2->setPixmap(g4);

        break;
        }
    case 5: {QPixmap g5("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo5.png");
        ui->label_2->setPixmap(g5);
        break;
        }
    case 6:{QPixmap g6("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo6.png");
        ui->label_2->setPixmap(g6);
        break;
        }
    case 7: {QPixmap g7("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo7.png");
        ui->label_2->setPixmap(g7);
        break;
        }
    case 8:{QPixmap g8("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo8.png");
        ui->label_2->setPixmap(g8);
        break;
        }
    case 9:{QPixmap g9("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo9.png");
        ui->label_2->setPixmap(g9);
        break;
        }
    case 10:{QPixmap g10("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo10.png");
        ui->label_2->setPixmap(g10);
        break;
        }
    }

}
