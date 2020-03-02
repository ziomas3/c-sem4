#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event) override;
};

class MyWidget2 : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget2(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event) override;
};

class animka : public QWidget
{
    Q_OBJECT
public:
    explicit animka(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event) override;
};
#endif // MYWIDGET_H
