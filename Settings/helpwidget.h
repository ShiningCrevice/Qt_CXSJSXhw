#ifndef HELPWIDGET_H
#define HELPWIDGET_H

#include <QWidget>

namespace Ui {
class HelpWidget;
}

class HelpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HelpWidget(QWidget *parent = nullptr);
    ~HelpWidget();
    void setDarkMode(bool mode);

private slots:

private:
    Ui::HelpWidget *ui;
    bool darkMode;
};

#endif // HELPWIDGET_H
