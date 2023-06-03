#ifndef MEET_H
#define MEET_H

#include <QWidget>
#include <QIcon>
#include <QPainter>
#include <QStyleOption>
#include "config.h"
#include "event_con.h"
#include "manage_task.h"
#include <QLineEdit>

namespace Ui {
class Meet;
}

class Meet : public QWidget
{
    Q_OBJECT

public:
    explicit Meet(QWidget *parent = nullptr);
    ~Meet();
    void initScene();
    void paintEvent(QPaintEvent *event);
    void playGame();
    void show_self();
signals:
    void showMain();
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_timeEdit_2_userTimeChanged(const QTime &time);

private:
    Ui::Meet *ui;
};

#endif // MEET_H
