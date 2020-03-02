#include <QApplication>
#include <QMessageBox>

#include "mainwindow.h"
#include "mywidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setGeometry(10, 20, 800, 500);
    w.show();
    QMessageBox::information(&w, "Klikanie na ekranie", "Ten program reaguje na kilkanie", QMessageBox::Ok);

    return a.exec();
}
