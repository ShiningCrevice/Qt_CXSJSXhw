#include "widget.h"
#include "ui_widget.h"
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
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    initScene();
    initDateEditUI(ui->startDateEdit, this);
    initSpinBoxUI(ui->totalWeeksEdit, this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void Widget::initScene()
{
    //初始化窗口大小
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);

    //设置窗口标题
    setWindowTitle(GAME_TITLE);
    setWindowIcon(QIcon( GAME_ICON));

    //设置窗口背景颜色
    setStyleSheet("background-color: rgb(196,230,255);");
}

 //初始化日期控件
void Widget::initDateEditUI(QDateEdit* dateEdit, QWidget* parent)
{
    dateEdit->setAlignment(Qt::AlignCenter);
    dateEdit->setCalendarPopup(true);
    dateEdit->setDisplayFormat("yyyy-MM-dd");
    dateEdit->setStyleSheet("background-color: rgb(255,255,255)");
    dateEdit->setDate(QDate::currentDate());
    QFont font("华文中宋", 14);
    dateEdit->setFont(font);
    dateEdit->installEventFilter(parent);
    for(auto lineEdit:dateEdit->findChildren<QLineEdit*>())
    {
        if(lineEdit)
        {
            if(lineEdit->objectName() == "qt_spinbox_lineedit")
            {
                lineEdit->setReadOnly(true);
                lineEdit->setFont(font);
                lineEdit->setAlignment(Qt::AlignCenter);
                lineEdit->installEventFilter(parent);
                QLineEdit::connect(lineEdit,&QLineEdit::selectionChanged,[=]{ lineEdit->deselect(); });
            }
            break;
        }
    }

    QCalendarWidget * cale = dateEdit->calendarWidget();
    cale->setMinimumSize(500,290);
    cale->setFont(font);
    cale->setStyleSheet(
        QString(
            "QCalendarWidget QWidget#qt_calendar_navigationbar { %3; }"
            "QCalendarWidget QToolButton { %3; %2; height: 50px; }"
            "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
            "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
            "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right: 20px; width: 140px; icon-size: 30px, 30px; }"
            "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left: 20px; width: 140px; icon-size: 30px, 30px; }"
            "QCalendarWidget QMenu { %3; %2; width: 140px; left: 20px; }"
            "QCalendarWidget QMenu::item { %1; background-color: transparent; padding-top: 5px; padding-bottom: 5px; padding-left: 50px; padding-right: 40px; }"
            "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width: 30px; }"
            "QCalendarWidget QSpinBox::down-button {subcontrol-origin: border; subcontrol-position: bottom right; width: 30px; }"
            "QCalendarWidget QSpinBox::up-arrow { width: 30px; height: 30px; }"
            "QCalendarWidget QSpinBox::down-arrow { width: 30px; height: 30px; }"
            "QCalendarWidget QWidget { %4; }"
            "QCalendarWidget QAbstractItemView:enabled { %1; %3; %5; %6; }"
            "QCalendarWidget QAbstractItemView:disabled { %7; }")
            .arg("font: 14pt \"华文中宋\"; color: rgb(0, 0, 0)")
            .arg("font: 18pt \"华文中宋\"; color: rgb(0, 0, 0)")
            .arg("background-color: rgb(255, 255, 255)") //背景色
            .arg("alternate-background-color: rgb(247, 247, 247)") //星期栏背景色
            .arg("selection-background-color: rgb(231, 255, 166)") //选中的日期背景颜色
            .arg("selection-color: rgb(0, 0, 0)") //选中的日期字体颜色
            .arg("color: rgb(200, 200, 200)") //非本月的日期字体颜色
                        ) ;
    QSpinBox*yearEdit = 0;
    QToolButton*yearButton = 0;
    for(auto spinBox:cale->findChildren<QSpinBox*>())
    {
        if(spinBox)
        {
            if(spinBox->objectName() == "qt_calendar_yearedit")
            {
                yearEdit = spinBox;
                yearEdit->setAlignment(Qt::AlignCenter);
                break;
            }
        }
    }
    for(auto btn:cale->findChildren<QToolButton*>())
    {
        if(btn)
        {
            if(btn->objectName() == "qt_calendar_yearbutton")
            {
                yearButton = btn;
                break;
            }
        }
    }
    if(yearEdit != 0 && yearButton != 0)
    {
        QSpinBox::connect(yearEdit, &QSpinBox::editingFinished,[=]
            {
                QTimer::singleShot(10,[=]{
                    yearButton->setText(yearEdit->text());
                });
            }
        );
    }
}

void Widget::initSpinBoxUI(QSpinBox* spinBox, QWidget* parent) {
    spinBox->setAlignment(Qt::AlignCenter);
    QFont font("华文中宋", 14);
    spinBox->setFont(font);
    spinBox->setStyleSheet("background-color: rgb(255,255,255)");
}

void Widget::on_startDateEdit_userDateChanged(const QDate &date)
{

}

void Widget::on_darkModeButton_clicked()
{
    if (ui->darkModeButton->isChecked()) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->startDateLabel->setStyleSheet("color: rgb(192, 194, 195)");
        ui->totalWeeksLabel->setStyleSheet("color: rgb(192, 194, 195)");
        ui->darkModeLabel->setStyleSheet("color: rgb(192, 194, 195)");
        ui->helpLabel->setStyleSheet("color: rgb(192, 194, 195)");
        ui->darkModeButton->setStyleSheet("color: rgb(192, 194, 195)");
        ui->helpButton->setStyleSheet("color: rgb(192, 194, 195)");

        ui->backButton->setStyleSheet(  "font: 20pt \"华文中宋\";"
                                        "color: rgb(192, 194, 195);"
                                        "background-color: rgb(64, 66, 68);"
                                        "border-radius: 15px;");
        ui->helpButton->setStyleSheet("color: rgb(192, 194, 195);"
                                      "background-color: rgb(46, 47, 48);");

        ui->startDateEdit->calendarWidget()->setStyleSheet(
            QString(
                "QCalendarWidget QWidget#qt_calendar_navigationbar { %3; }"
                "QCalendarWidget QToolButton { %3; %2; height: 50px; }"
                "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
                "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
                "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right: 20px; width: 140px; icon-size: 30px, 30px; }"
                "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left: 20px; width: 140px; icon-size: 30px, 30px; }"
                "QCalendarWidget QMenu { %3; %2; width: 140px; left: 20px; }"
                "QCalendarWidget QMenu::item { %1; background-color: transparent; padding-top: 5px; padding-bottom: 5px; padding-left: 50px; padding-right: 40px; }"
                "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width: 30px; }"
                "QCalendarWidget QSpinBox::down-button {subcontrol-origin: border; subcontrol-position: bottom right; width: 30px; }"
                "QCalendarWidget QSpinBox::up-arrow { width: 30px; height: 30px; }"
                "QCalendarWidget QSpinBox::down-arrow { width: 30px; height: 30px; }"
                "QCalendarWidget QWidget { %4; }"
                "QCalendarWidget QAbstractItemView:enabled { %1; %3; %5; %6; }"
                "QCalendarWidget QAbstractItemView:disabled { %7; }")
                .arg("font: 14pt \"华文中宋\"; color: rgb(192, 194, 195)")
                .arg("font: 18pt \"华文中宋\"; color: rgb(192, 194, 195)")
                .arg("background-color: rgb(30, 30, 30)") //背景色
                .arg("alternate-background-color: rgb(40, 40, 40)") //星期栏背景色
                .arg("selection-background-color: rgb(64, 66, 68)") //选中的日期背景颜色
                .arg("selection-color: rgb(192, 194, 195)") //选中的日期字体颜色
                .arg("color: rgb(50, 50, 50)") //非本月的日期字体颜色
            ) ;
    }
    else {
        setStyleSheet("background-color: rgb(196,230,255);");
        ui->startDateLabel->setStyleSheet("color: rgb(0,0,0)");
        ui->totalWeeksLabel->setStyleSheet("color: rgb(0,0,0)");
        ui->darkModeLabel->setStyleSheet("color: rgb(0,0,0)");
        ui->helpLabel->setStyleSheet("color: rgb(0,0,0)");
        ui->darkModeButton->setStyleSheet("color: rgb(0,0,0)");
        ui->helpButton->setStyleSheet("color: rgb(0,0,0)");

        ui->backButton->setStyleSheet(  "font: 20pt \"华文中宋\";"
                                        "color: rgb(0, 0, 0);"
                                        "background-color: rgb(231, 255, 166);"
                                        "border-radius: 15px;");
        ui->helpButton->setStyleSheet("color: rgb(0, 0, 0);"
                                      "background-color: rgb(196, 230, 255);");

        ui->startDateEdit->calendarWidget()->setStyleSheet(
            QString(
               "QCalendarWidget QWidget#qt_calendar_navigationbar { %3; }"
               "QCalendarWidget QToolButton { %3; %2; height: 50px; }"
               "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
               "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
               "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right: 20px; width: 140px; icon-size: 30px, 30px; }"
               "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left: 20px; width: 140px; icon-size: 30px, 30px; }"
               "QCalendarWidget QMenu { %3; %2; width: 140px; left: 20px; }"
               "QCalendarWidget QMenu::item { %1; background-color: transparent; padding-top: 5px; padding-bottom: 5px; padding-left: 50px; padding-right: 40px; }"
               "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width: 30px; }"
               "QCalendarWidget QSpinBox::down-button {subcontrol-origin: border; subcontrol-position: bottom right; width: 30px; }"
               "QCalendarWidget QSpinBox::up-arrow { width: 30px; height: 30px; }"
               "QCalendarWidget QSpinBox::down-arrow { width: 30px; height: 30px; }"
               "QCalendarWidget QWidget { %4; }"
               "QCalendarWidget QAbstractItemView:enabled { %1; %3; %5; %6; }"
               "QCalendarWidget QAbstractItemView:disabled { %7; }")
               .arg("font: 14pt \"华文中宋\"; color: rgb(0, 0, 0)")
               .arg("font: 18pt \"华文中宋\"; color: rgb(0, 0, 0)")
               .arg("background-color: rgb(255, 255, 255)") //背景色
               .arg("alternate-background-color: rgb(247, 247, 247)") //星期栏背景色
               .arg("selection-background-color: rgb(231, 255, 166)") //选中的日期背景颜色
               .arg("selection-color: rgb(0, 0, 0)") //选中的日期字体颜色
               .arg("color: rgb(200, 200, 200)") //非本月的日期字体颜色
                                                           ) ;
    }
}


void Widget::on_helpButton_clicked()
{

}


void Widget::on_backButton_clicked()
{

}

