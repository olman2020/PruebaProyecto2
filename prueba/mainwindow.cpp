#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grafowindow.h"
#include "grafo.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_crearBoton_clicked()
{

    //Grafo G;
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


    QString tgrafo = ui->cantidad->text();
    QString torigen = ui->ciudadSalida->text();
    QString tdestino = ui->ciudadDestino->text();
    long int tipo = tgrafo.toInt();
    string origen = torigen.toStdString();
    string destino = tdestino.toStdString();
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

        ui->E3->setText(QString::fromStdString(E3));
        ui->NaranjaG4->setText(QString::fromStdString(E1));
        ui->RojoG4->setText(QString::fromStdString(E2));
        ui->VerdeClaroG4->setText(QString::fromStdString(E4));

        ui->NaRG4->setText(QString::number(A1));
        ui->RaVCG4->setText(QString::number(A2));
        ui->RaAZG4->setText(QString::number(A3));
        ui->AZaNG4->setText(QString::number(A4));
        ui->VCaNG4->setText(QString::number(A5));
        ui->VCaAZG4->setText(QString::number(A6));


        QPixmap g4("C:/Users/Isaac/Documents/GitHub/PruebaProyecto2/prueba/Img/grafo4.png");
        //QPixmap g4("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo4.png");
        ui->label_2->setPixmap(g4);
        break;
        }
    case 5: {
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E5), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E5), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E3), A5);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E1), A6);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E2), A7);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E4), A8);

        ui->NaranjaG5->setText(QString::fromStdString(E1));
        ui->RojoG5->setText(QString::fromStdString(E2));
        ui->AzulG5->setText(QString::fromStdString(E3));
        ui->VerdeClaroG5->setText(QString::fromStdString(E4));
        ui->VerdeOscuroG5->setText(QString::fromStdString(E5));

        ui->NaRG5->setText(QString::number(A1));
        ui->NaVOG5->setText(QString::number(A2));
        ui->RaAZG5->setText(QString::number(A3));
        ui->AZaVOG5->setText(QString::number(A4));
        ui->VCaAZG5->setText(QString::number(A5));
        ui->VCaNG5->setText(QString::number(A6));
        ui->VOaRG5->setText(QString::number(A7));
        ui->VOaVCG5->setText(QString::number(A8));

        QPixmap g5("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo5.png");
        ui->label_2->setPixmap(g5);
        break;
        }
    case 6:{
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);
        G.InsertaVertice(E6);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E6), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E5), A3);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E4), A4);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E4), A5);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E1), A6);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E1), A7);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E3), A8);


        ui->NaranjaG6->setText(QString::fromStdString(E1));
        ui->RojoG6->setText(QString::fromStdString(E2));
        ui->VerdeOscuroG6->setText(QString::fromStdString(E3));
        ui->MoradoG6->setText(QString::fromStdString(E4));
        ui->AzulG6->setText(QString::fromStdString(E5));
        ui->VerdeClaroG6->setText(QString::fromStdString(E6));

        ui->NaRG6->setText(QString::number(A1));
        ui->NaVCG6->setText(QString::number(A2));
        ui->RaAG6->setText(QString::number(A3));
        ui->RaMG6->setText(QString::number(A4));
        ui->VOaMG6->setText(QString::number(A5));
        ui->MaNG6->setText(QString::number(A6));
        ui->AaNG6->setText(QString::number(A7));
        ui->VCaVOG6->setText(QString::number(A8));

        QPixmap g6("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo6.png");
        ui->label_2->setPixmap(g6);
        break;
        }
    case 7: {
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);
        G.InsertaVertice(E6);
        G.InsertaVertice(E7);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E7), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E7), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E7), A5);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E4), A6);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E6), A7);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E1), A8);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E2), A9);
        G.InsertaArista(G.GetVertice(E7), G.GetVertice(E5), A10);

        ui->NaranjaG7->setText(QString::fromStdString(E1));
        ui->RojoG7->setText(QString::fromStdString(E2));
        ui->MoradoG7->setText(QString::fromStdString(E3));
        ui->LilaG7->setText(QString::fromStdString(E4));
        ui->AmarilloG7->setText(QString::fromStdString(E5));
        ui->VerdeOscuroG7->setText(QString::fromStdString(E6));
        ui->AzulG7->setText(QString::fromStdString(E7));

        ui->NaRG7->setText(QString::number(A1));
        ui->RaMG7->setText(QString::number(A2));
        ui->RaAZG7->setText(QString::number(A3));
        ui->MaAZ->setText(QString::number(A4));
        ui->LaAZG7->setText(QString::number(A5));
        ui->AMaLG7->setText(QString::number(A6));
        ui->AMaVOG7->setText(QString::number(A7));
        ui->VOaNG7->setText(QString::number(A8));
        ui->VOaRG7->setText(QString::number(A9));
        ui->AZaAMG7->setText(QString::number(A10));

        QPixmap g7("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo7.png");
        ui->label_2->setPixmap(g7);
        break;
        }
    case 8:{
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);
        G.InsertaVertice(E6);
        G.InsertaVertice(E7);
        G.InsertaVertice(E8);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E8), A1);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E1), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E4), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E2), A5);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E8), A6);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E5), A7);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E8), A8);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E4), A9);
        G.InsertaArista(G.GetVertice(E7), G.GetVertice(E5), A10);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E2), A11);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E6), A12);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E7), A13);

        ui->NaranjaG8->setText(QString::fromStdString(E1));
        ui->RojoG8->setText(QString::fromStdString(E2));
        ui->LilaG8->setText(QString::fromStdString(E3));
        ui->VerdeOscuroG8->setText(QString::fromStdString(E4));
        ui->MoradoG8->setText(QString::fromStdString(E5));
        ui->AzulG8->setText(QString::fromStdString(E6));
        ui->VerdeClaroG8->setText(QString::fromStdString(E7));
        ui->AmarilloG8->setText(QString::fromStdString(E8));

        ui->NaAMG8->setText(QString::number(A1));
        ui->RaNG8->setText(QString::number(A2));
        ui->RaLG8->setText(QString::number(A3));
        ui->LaVOG->setText(QString::number(A4));
        ui->VOaRG8->setText(QString::number(A5));
        ui->VOaAMG8->setText(QString::number(A6));
        ui->VOaMG8->setText(QString::number(A7));
        ui->MaAMG8->setText(QString::number(A8));
        ui->AZaVOG8->setText(QString::number(A9));
        ui->VCaMG8->setText(QString::number(A10));
        ui->AMaRG8->setText(QString::number(A11));
        ui->AMaAZG8->setText(QString::number(A12));
        ui->AMaVCG8->setText(QString::number(A13));

        QPixmap g8("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo8.png");
        ui->label_2->setPixmap(g8);
        break;
        }
    case 9:{
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);
        G.InsertaVertice(E6);
        G.InsertaVertice(E7);
        G.InsertaVertice(E8);
        G.InsertaVertice(E9);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A2);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E8), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E4), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E8), A5);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E5), A6);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E9), A7);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E1), A8);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E5), A9);
        G.InsertaArista(G.GetVertice(E7), G.GetVertice(E8), A10);
        G.InsertaArista(G.GetVertice(E7), G.GetVertice(E6), A11);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E2), A12);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E9), A13);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E2), A14);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E4), A15);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E7), A16);

        //ui->NaranjaG9->setText(QString::fromStdString(E1));
        //ui->RojoG9->setText(QString::fromStdString(E2));
        //ui->VerdeOscuroG9->setText(QString::fromStdString(E3));
        //ui->LilaG9->setText(QString::fromStdString(E4));
        //ui->RosadoG9->setText(QString::fromStdString(E5));
        //ui->AzulG9->setText(QString::fromStdString(E6));
        //ui->AmarilloG9->setText(QString::fromStdString(E7));
        //ui->VerdeClaroG9->setText(QString::fromStdString(E8));
        //ui->MoradoG9->setText(QString::fromStdString(E9));

        ui->NaAMG8->setText(QString::number(A1));
        ui->RaNG8->setText(QString::number(A2));
        ui->RaLG8->setText(QString::number(A3));
        ui->LaVOG->setText(QString::number(A4));
        ui->VOaRG8->setText(QString::number(A5));
        ui->VOaAMG8->setText(QString::number(A6));
        ui->VOaMG8->setText(QString::number(A7));
        ui->MaAMG8->setText(QString::number(A8));
        ui->AZaVOG8->setText(QString::number(A9));
        ui->VCaMG8->setText(QString::number(A10));
        ui->AMaRG8->setText(QString::number(A11));
        ui->AMaAZG8->setText(QString::number(A12));
        ui->AMaVCG8->setText(QString::number(A13));
        ui->AMaVCG8->setText(QString::number(A14));
        ui->AMaVCG8->setText(QString::number(A15));
        ui->AMaVCG8->setText(QString::number(A16));

        QPixmap g9("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo9.png");
        ui->label_2->setPixmap(g9);
        break;
        }
    case 10:{
        G.InsertaVertice(E1);
        G.InsertaVertice(E2);
        G.InsertaVertice(E3);
        G.InsertaVertice(E4);
        G.InsertaVertice(E5);
        G.InsertaVertice(E6);
        G.InsertaVertice(E7);
        G.InsertaVertice(E8);
        G.InsertaVertice(E9);
        G.InsertaVertice(E10);

        G.InsertaArista(G.GetVertice(E1), G.GetVertice(E2), A1);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E3), A2);
        G.InsertaArista(G.GetVertice(E2), G.GetVertice(E7), A3);
        G.InsertaArista(G.GetVertice(E3), G.GetVertice(E4), A4);
        G.InsertaArista(G.GetVertice(E4), G.GetVertice(E5), A5);
        G.InsertaArista(G.GetVertice(E5), G.GetVertice(E6), A6);
        G.InsertaArista(G.GetVertice(E6), G.GetVertice(E1), A7);
        G.InsertaArista(G.GetVertice(E7), G.GetVertice(E8), A8);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E2), A9);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E3), A10);
        G.InsertaArista(G.GetVertice(E8), G.GetVertice(E9), A11);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E4), A12);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E7), A13);
        G.InsertaArista(G.GetVertice(E9), G.GetVertice(E10), A14);
        G.InsertaArista(G.GetVertice(E10), G.GetVertice(E1), A15);
        G.InsertaArista(G.GetVertice(E10), G.GetVertice(E5), A16);

        //ui->NaranjaG10->setText(QString::fromStdString(E1));
        //ui->RojoG10->setText(QString::fromStdString(E2));
        //ui->VerdeOscuroG10->setText(QString::fromStdString(E3));
        //ui->LilaG10->setText(QString::fromStdString(E4));
        //ui->RosadoG10->setText(QString::fromStdString(E5));
        //ui->AzulG10->setText(QString::fromStdString(E6));
        //ui->AmarilloG10->setText(QString::fromStdString(E7));
        //ui->VerdeClaroG10->setText(QString::fromStdString(E8));
        //ui->CelesteG10->setText(QString::fromStdString(E9));
        //ui->MoradoG10->setText(QString::fromStdString(E10));

        ui->NaAMG8->setText(QString::number(A1));
        ui->RaNG8->setText(QString::number(A2));
        ui->RaLG8->setText(QString::number(A3));
        ui->LaVOG->setText(QString::number(A4));
        ui->VOaRG8->setText(QString::number(A5));
        ui->VOaAMG8->setText(QString::number(A6));
        ui->VOaMG8->setText(QString::number(A7));
        ui->MaAMG8->setText(QString::number(A8));
        ui->AZaVOG8->setText(QString::number(A9));
        ui->VCaMG8->setText(QString::number(A10));
        ui->AMaRG8->setText(QString::number(A11));
        ui->AMaAZG8->setText(QString::number(A12));
        ui->AMaVCG8->setText(QString::number(A13));

        QPixmap g10("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo10.png");
        ui->label_2->setPixmap(g10);
        break;
        }
    }

}


void MainWindow::on_ciudadesBoton_clicked()
{

    QString torigen = ui->ciudadSalida->text();
    QString tdestino = ui->ciudadDestino->text();
    string origen = torigen.toStdString();
    string destino = tdestino.toStdString();
    if(torigen != NULL and tdestino != NULL){
        G.PrimeroMejor(G.GetVertice(origen), G.GetVertice(destino));
    }
}




