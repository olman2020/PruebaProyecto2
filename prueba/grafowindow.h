#ifndef GRAFOWINDOW_H
#define GRAFOWINDOW_H

#include <QDialog>

namespace Ui {
class GrafoWindow;
}

class GrafoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GrafoWindow(QString num, QWidget *parent = nullptr);
    ~GrafoWindow();
    //void PasarNumeros(QString& cantidad);
    QString numero;


private:
    Ui::GrafoWindow *ui;
};

#endif // GRAFOWINDOW_H
