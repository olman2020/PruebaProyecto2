/**
 * @file mainwindow.h
 * @version 5.0
 * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
 * @brief Resisa de que tamaño tiene que ser el grafo, lo crea y
 * Una vez introducidos los vertice para la ruta realiza el proceso
 * para proporcionar los datos necesarios para la solucion
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "grafo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Grafo G;
    Ui::MainWindow *ui;

private slots:
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Verifica cuando el boton de crear grafo hace click y crea el grafo segun el tañamo seleccionado
     */
    void on_crearBoton_clicked();
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Verifica cunado el boton de origen y destino hace click, y envia los dos parametros a la funcion de da el recorrido, el costo total y el costo minimo
     */
    void on_ciudadesBoton_clicked();


private:

};
#endif // MAINWINDOW_H
