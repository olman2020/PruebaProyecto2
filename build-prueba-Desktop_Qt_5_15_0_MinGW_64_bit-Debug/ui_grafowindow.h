/********************************************************************************
** Form generated from reading UI file 'grafowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFOWINDOW_H
#define UI_GRAFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_GrafoWindow
{
public:
    QLabel *label_pic;
    QLabel *numero;

    void setupUi(QDialog *GrafoWindow)
    {
        if (GrafoWindow->objectName().isEmpty())
            GrafoWindow->setObjectName(QString::fromUtf8("GrafoWindow"));
        GrafoWindow->resize(1019, 790);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        GrafoWindow->setPalette(palette);
        GrafoWindow->setAutoFillBackground(false);
        label_pic = new QLabel(GrafoWindow);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(100, 60, 751, 571));
        numero = new QLabel(GrafoWindow);
        numero->setObjectName(QString::fromUtf8("numero"));
        numero->setGeometry(QRect(20, 560, 51, 51));

        retranslateUi(GrafoWindow);

        QMetaObject::connectSlotsByName(GrafoWindow);
    } // setupUi

    void retranslateUi(QDialog *GrafoWindow)
    {
        GrafoWindow->setWindowTitle(QCoreApplication::translate("GrafoWindow", "Dialog", nullptr));
        label_pic->setText(QString());
        numero->setText(QCoreApplication::translate("GrafoWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GrafoWindow: public Ui_GrafoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFOWINDOW_H
