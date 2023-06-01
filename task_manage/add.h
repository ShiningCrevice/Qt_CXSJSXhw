#ifndef ADD_H
#define ADD_H

#include <QMainWindow>
#include <QIcon>
#include <QPainter>
#include "meet.h"
#include "class.h"
#include "ddl.h"
#include "event_con.h"

namespace Ui {
class Add;
}

class Add : public QMainWindow
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void playGame();
    Class son_cla;
    DDL son_ddl;
    Meet son_meet;
signals:
    void showMain();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void show_myself();
private:
    Ui::Add *ui;
};

#endif // DELETE_H
