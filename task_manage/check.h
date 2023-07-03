#ifndef CHECK_H
#define CHECK_H

#include <QWidget>
#include<QPainter>
#include<QIcon>
#include"event_con.h"
#include "config.h"
#include<QStyleOption>
#include"manage_task.h"
#include"textanimationwidget.h"
#include<algorithm>
#include<QDate>
#include<QDateTime>
#include <QVBoxLayout>
#include<QDebug>
#include<vector>
#include<QBrush>
#include<QMovie>

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
    void get1();
    void get2();
signals:
    void showMain();

private slots:
    void on_btnBack_clicked();

private:
    Ui::Check *ui;
};

#endif // CHECK_H
