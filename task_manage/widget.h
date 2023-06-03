#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIcon>
#include <QSpinBox>
#include "qdatetimeedit.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void initScene();
    void initDateEditUI(QDateEdit* dateEdit,QWidget* parent);
    void initSpinBoxUI(QSpinBox* spinBox, QWidget* parent);
    void paintEvent(QPaintEvent *event);

signals:
    void showMain();

private slots:

    void on_startDateEdit_userDateChanged(const QDate &date);

    void on_darkModeButton_clicked();

    void on_helpButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
