#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include <QWidget>
#include "task.h"
#include "manage_task.h"
#include "event_con.h"
#include "widget.h"
#include "check.h"
#include "nothing.h"
#include "widget.h"
#include <QScrollBar>
#include <QDateTime>
#include <QPalette>
#include <QPushButton>
#include <QDate>
#include <QTime>
#include <QMovie>
namespace Ui {
class mainscene;
}

class main_scene : public QWidget
{
    Q_OBJECT

public:
    explicit main_scene(QWidget *parent = nullptr);
    ~main_scene();
    Widget pax;
    task son_task;
    Check son_check;
    Nothing son_nothing;
    void get();
    void initScene();
    void refresh();

private slots:
    void on_pushButton_clicked();
    void show_myself();

    void on_btnSet_clicked();

    void on_btnCheck_clicked();

    void on_btnHelp_clicked();

private:
    Ui::mainscene *ui;
};

#endif // MAIN_SCENE_H
