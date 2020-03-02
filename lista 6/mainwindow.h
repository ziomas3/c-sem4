#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <mywidget.h>
#include <QMainWindow>
#include <QVector>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
    int animx=0;
    int animy=0;
    animka * anim;
    ~MainWindow();

protected:
    void timerEvent(QTimerEvent *event);
private:
    QVector<QWidget*> widgets;
};

#endif // MAINWINDOW_H
