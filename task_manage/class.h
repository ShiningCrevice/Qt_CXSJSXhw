#ifndef CLASS_H
#define CLASS_H

#include <QWidget>
#include <QIcon>
#include <QPainter>
#include "config.h"
#include "event_con.h"
#include "manage_task.h"

namespace Ui {
class Class;
}

class Class : public QWidget
{
    Q_OBJECT

public:
    explicit Class(QWidget *parent = nullptr);
    ~Class();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void show_self();
signals:
    void showMain();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_lineEdit_3_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_lineEdit_5_editingFinished();

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_timeEdit_2_userTimeChanged(const QTime &time);

    void on_comboBox_activated(int index);

private:
    Ui::Class *ui;
};

#endif // CLASS_H
