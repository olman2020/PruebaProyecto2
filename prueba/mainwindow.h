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


private slots:

    void on_crearBoton_clicked();

    void on_ciudadesBoton_clicked();

    void on_ciudadesBoton_windowIconTextChanged(const QString &iconText);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
