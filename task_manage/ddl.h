#ifndef DDL_H
#define DDL_H

#include <QWidget>
#include <QIcon>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include "event_con.h"
#include "config.h"
#include "event_con.h"
#include "manage_task.h"

namespace Ui {
class DDL;
}

class DDL : public QWidget
{
    Q_OBJECT

public:
    explicit DDL(QWidget *parent = nullptr);
    ~DDL();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void playGame();
signals:
    void showMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_3_editingFinished();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_dateEdit_userDateChanged(const QDate &date);

private:
    Ui::DDL *ui;
};

#endif // DDL_H
