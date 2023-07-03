#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIcon>
#include <QSpinBox>
#include "qdatetimeedit.h"
#include "helpwidget.h"
#include "config.h"
#include <QPixmap>
#include <QPainter>
#include <QDate>
#include <QTimer>
#include <QLineEdit>
#include <QCalendarWidget>
#include <QToolButton>
#include <QPalette>
#include <QBrush>
#include <QStyleOption>

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
    void show_myself();
    void get();
    void bedark();
    void belight();
    HelpWidget hw;

signals:
    void showMain();

private slots:

    void on_startDateEdit_userDateChanged(const QDate &date);
    void on_darkModeButton_clicked();
    void on_helpButton_clicked();
    void on_backButton_clicked();
    void on_totalWeeksEdit_valueChanged(int arg1);

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
