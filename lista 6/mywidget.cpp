#include "mainwindow.h"
#include "mywidget.h"
#include <QPainter>
int numer=0;
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

void MyWidget::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(QBrush(QColor("red")));
    painter.drawRect(this->rect());
    painter.drawText(20, 20, "Im numer: " + QString::number(numer));
}

MyWidget2::MyWidget2(QWidget *parent) : QWidget(parent)
{

}

void MyWidget2::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(QBrush(QColor("green")));
    painter.drawEllipse(this->rect());
    painter.drawText(20, 20, "");
}
animka::animka(QWidget *parent) : QWidget(parent)
{

}
void animka::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(QBrush(QColor("blue")));
    painter.drawEllipse(this->rect());
    painter.drawText(20, 20, "animka");
}


