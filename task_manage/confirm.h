#ifndef CONFIRM_H
#define CONFIRM_H

#include <QWidget>
#include "config.h"
#include <QLabel>
#include <QGridLayout>
#include <QMovie>
#include <QIcon>
#include <QLayout>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>

namespace Ui {
class Confirm;
}

class Confirm : public QWidget
{
    Q_OBJECT

public:
    explicit Confirm(QWidget *parent = nullptr);
    ~Confirm();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void playGame();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Confirm *ui;
signals:
    void showMain();
};

#endif // CONFIRM_H
