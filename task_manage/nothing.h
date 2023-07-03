#ifndef NOTHING_H
#define NOTHING_H

#include "config.h"
#include <QWidget>
#include "darkModeFunctions.h"

namespace Ui {
class Nothing;
}

class Nothing : public QWidget
{
    Q_OBJECT

public:
    explicit Nothing(QWidget *parent = nullptr);
    ~Nothing();
    void show_self();
    void initScene();

signals:
    void showMain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nothing *ui;
};

#endif // NOTHING_H
