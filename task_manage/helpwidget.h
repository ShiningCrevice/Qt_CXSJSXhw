#ifndef HELPWIDGET_H
#define HELPWIDGET_H

#include <QWidget>
#include "darkModeFunctions.h"
#include "config.h"

namespace Ui {
class HelpWidget;
}

class HelpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HelpWidget(QWidget *parent = nullptr);
    ~HelpWidget();
    void get();
    void initScene();

private slots:

private:
    Ui::HelpWidget *ui;
};

#endif // HELPWIDGET_H
