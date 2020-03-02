#include "mainwindow.h"
#include "mywidget.h"
#include <QMouseEvent>
#include <QMessageBox>
#include <QDebug>

extern int numer;
MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
{
    qDebug() << "constructor of " << this;
    startTimer(50);
    anim = new animka(this);
}
bool ctrl= 0;
void MainWindow::mousePressEvent(QMouseEvent* event)
{
   if (event->button() == Qt::LeftButton)
   {
       auto x = event->x();
       auto y = event->y();
       MyWidget * mw = new MyWidget(this);
       mw->setGeometry(x, y, 100, 100);
       mw->show();
       widgets.push_back(mw);
       numer++;
   }
   if (event->button() == Qt::RightButton)
   {
       auto x = event->x();
       auto y = event->y();
       MyWidget2 * mw = new MyWidget2(this);
       mw->setGeometry(x, y, 100, 100);
       mw->show();
       widgets.push_back(mw);
   }
}
void MainWindow::keyReleaseEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Control) ctrl=0;
}
void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Control) ctrl=1;
    if (event->key() == Qt::Key_Z && ctrl==1)
    {
        if (widgets.length() > 0)
        {
            widgets.last()->hide();
            widgets.removeLast();
        }
        else
        {
            MainWindow x;
            x.setGeometry(10, 20, 800, 500);

            QMessageBox::information(&x, "Nie ma co usunąć!", "Nie ma co usunąć!", QMessageBox::Ok);
        }
    }
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    animx++;
    animy++;

    anim->setGeometry(animx, animy, 100, 100);

    anim->show();

}
MainWindow::~MainWindow()
{
    qDebug() << "destructor of " << this;
    for (auto element:this->widgets)
        delete element;
}
