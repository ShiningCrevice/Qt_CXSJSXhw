#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include <QWidget>
#include "task.h"
#include "manage_task.h"
#include "event_con.h"

namespace Ui {
class main_scene;
}

class main_scene : public QWidget
{
    Q_OBJECT

public:
    explicit main_scene(QWidget *parent = nullptr);
    ~main_scene();
    task son_task;
    void initScene();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();
    void show_myself();

private:
    Ui::main_scene *ui;
};

#endif // MAIN_SCENE_H
