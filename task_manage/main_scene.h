#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include <QWidget>
#include "task.h"
#include "manage_task.h"
#include "event_con.h"
#include "widget.h"
#include"check.h"

namespace Ui {
class main_scene;
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
    void initScene();

private slots:
    void on_pushButton_clicked();
    void show_myself();

    void on_btnSet_clicked();

    void on_btnCheck_clicked();

private:
    Ui::main_scene *ui;
};

#endif // MAIN_SCENE_H
