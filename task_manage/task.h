#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include <QIcon>
#include <QPainter>
#include "delete.h"
#include "add.h"
#include "event_con.h"
#include "textanimationwidget.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPalette>
#include <QMovie>
#include <QDebug>
#include <QApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class task; }
QT_END_NAMESPACE

class task : public QWidget
{
    Q_OBJECT

public:
    task(QWidget *parent = nullptr);
    ~task();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void show_self();
    void get();

    Add son_add;
    Delete son_del;

    private slots:
        void show_myself();
        void on_pushButton_2_clicked();

        void on_pushButton_clicked();

        void on_pushButton_3_clicked();
    signals:
        void showMain();
    private:
    Ui::task *ui;
};

#endif // TASK_H
