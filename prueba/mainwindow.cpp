#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grafowindow.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap g5("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo7.png");
    ui->label_2->setPixmap(g5);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_crearBoton_clicked()
{
    QString tgrafo = ui->cantidad->text();
    long int tipo = tgrafo.toInt();
    switch(tipo)
    {
    case 4: {QPixmap g4("C:/Users/igarz/OneDrive/Documentos/PruebaProyecto2/prueba/Img/grafo4.png");
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

