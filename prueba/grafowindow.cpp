#include "grafowindow.h"
#include "ui_grafowindow.h"

GrafoWindow::GrafoWindow(QString num, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GrafoWindow)
{
    numero = num;
    ui->setupUi(this);

    QPixmap pix("C:/Users/igarz/Downloads/IMGp/grafo7.png");
    ui->label_pic->setPixmap(pix);


}

//void GrafoWindow::PasarNumeros(QString& cantidad){
    //numero = cantidad;
    //qDebug() <<"Vertices: "<<numero;
//}

GrafoWindow::~GrafoWindow()
{
    delete ui;
}
