#ifndef DELETE_H
#define DELETE_H

#include <QMainWindow>
#include <QIcon>
#include <QPainter>
#include "config.h"
#include <QComboBox>
#include <QLayout>
#include "event_con.h"
#include <vector>
#include "manage_task.h"
#include <QMessageBox>
#include "darkModeFunctions.h"
using namespace std;

namespace Ui {
class Delete;
}

class Delete : public QMainWindow
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();
    void paintEvent(QPaintEvent *event);
    void playGame();
    void getlist();
    void initScene();
    void show_self();
signals:
    void showMain();
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Delete *ui;
};

#endif // DELETE_H
