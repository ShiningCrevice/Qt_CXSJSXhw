#ifndef CHECK_H
#define CHECK_H

#include <QWidget>
#include<QPainter>
#include<QIcon>
#include"event_con.h"

namespace Ui {
class Check;
}

class Check : public QWidget
{
    Q_OBJECT

public:
    explicit Check(QWidget *parent = nullptr);
    ~Check();
    void initScene();
    void show_self();
    void playGame();
    void refresh();
signals:
    void showMain();

private slots:
    void on_btnBack_clicked();

private:
    Ui::Check *ui;
};

#endif // CHECK_H
