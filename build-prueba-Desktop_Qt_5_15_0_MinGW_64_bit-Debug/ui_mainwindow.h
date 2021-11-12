/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *titulo;
    QLineEdit *cantidad;
    QLabel *label;
    QPushButton *crearBoton;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(946, 678);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        titulo = new QLabel(centralwidget);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(50, 110, 221, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        titulo->setFont(font);
        titulo->setWordWrap(false);
        cantidad = new QLineEdit(centralwidget);
        cantidad->setObjectName(QString::fromUtf8("cantidad"));
        cantidad->setGeometry(QRect(90, 260, 121, 31));
        cantidad->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 200, 281, 41));
        label->setAlignment(Qt::AlignCenter);
        crearBoton = new QPushButton(centralwidget);
        crearBoton->setObjectName(QString::fromUtf8("crearBoton"));
        crearBoton->setGeometry(QRect(90, 320, 121, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 10, 501, 421));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RentACar", nullptr));
        titulo->setText(QCoreApplication::translate("MainWindow", "RENT A CAR", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingresar la cantidad de vertices que desea en el grafo\n"
"(Se permite de 7 a 15 vertices) ", nullptr));
        crearBoton->setText(QCoreApplication::translate("MainWindow", "Crear Grafo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
