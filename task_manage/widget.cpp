#include "widget.h"
#include "ui_widget.h"
extern bool darkMode;
extern QDate startDate;
extern int numOfWeek;
void Widget::bedark() {
    QPalette palette;
    QPixmap backgroundImage(":/res/res/darkBg.jpg");
    palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
    this->setPalette(palette);
    this->setAutoFillBackground(true);
    ui->startDateLabel->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
    ui->totalWeeksLabel->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
    ui->darkModeLabel->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
    ui->helpLabel->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");

    ui->darkModeButton->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
    ui->helpButton->setStyleSheet("font: 16pt \"华文中宋\"; color: rgb(196, 230, 255); background: transparent;");

    ui->backButton->setStyleSheet(  "font: 16pt \"华文中宋\";"
                                  "color: rgb(196, 230, 255);"
                                  "background-image: url(:/res/res/darkBg2.jpg);"
                                  "border-radius: 15px;");

    ui->startDateEdit->calendarWidget()->setStyleSheet(QString("QCalendarWidget QWidget#qt_calendar_navigationbar { %1; }"
                                                               "QCalendarWidget QToolButton { %1; %3; height: 50px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right:20px; width: 140px; icon-size: 30px, 30px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left:20px; width: 140px; icon-size: 30px, 30px; }"
                                                               "QCalendarWidget QMenu { %1; %3; width: 140px; left: 20px; }"
                                                               "QCalendarWidget QMenu::item { %2; background-color: transparent; padding-top:5px; padding-bottom:5px; padding-left:50px; padding-right:40px; }"
                                                               "QCalendarWidget QMenu::item:selected { %2; background-color: rgb(64, 66, 68); }"
                                                               "QCalendarWidget QSpinBox { %1; %3; width: 140px; selection-background-color: rgb(64, 66, 68); selection-color: rgb(192, 194, 195); }"
                                                               "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width:30px; }"
                                                               "QCalendarWidget QSpinBox::down-button { subcontrol-origin: border; subcontrol-position: bottom right; width:30px; }"
                                                               "QCalendarWidget QSpinBox::up-arrow { width:30px; height:30px; }"
                                                               "QCalendarWidget QSpinBox::down-arrow { width:30px; height:30px; }"
                                                               "QCalendarWidget QWidget { alternate-background-color: rgb(40, 40, 40); }"
                                                               "QCalendarWidget QAbstractItemView:enabled { %2; background-color:  rgb(30, 30, 30); selection-background-color: rgb(64, 66, 68); selection-color: rgb(192, 194, 195); }"
                                                               "QCalendarWidget QAbstractItemView:disabled { color: rgb(50, 50, 50); }")

                                                           .arg("background-color: rgb(30, 30, 30);",
                                                                "font: 14pt \"华文中宋\"; color: rgb(192, 194, 195)",
                                                                "font: 16pt \"华文中宋\"; color: rgb(192, 194, 195)")
                                                       ) ;
}
void Widget::belight() {
    QPalette palette;
    QPixmap backgroundImage(":/res/res/lightBg.jpg");
    palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
    this->setPalette(palette);
    this->setAutoFillBackground(true);
    ui->startDateLabel->setStyleSheet("color: rgb(0,0,0); background: transparent;");
    ui->totalWeeksLabel->setStyleSheet("color: rgb(0,0,0); background: transparent;");
    ui->darkModeLabel->setStyleSheet("color: rgb(0,0,0); background: transparent;");
    ui->helpLabel->setStyleSheet("color: rgb(0,0,0); background: transparent;");

    ui->darkModeButton->setStyleSheet("color: rgb(0,0,0);background: transparent;");
    ui->helpButton->setStyleSheet("font: 16pt \"华文中宋\";color: rgb(0,0,0); background: transparent;");

    ui->backButton->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg);"
                                  "border-radius: 15px;");

    ui->startDateEdit->calendarWidget()->setStyleSheet(QString("QCalendarWidget QWidget#qt_calendar_navigationbar { %1; }"
                                                               "QCalendarWidget QToolButton { %1; %3; height: 50px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right:20px; width: 140px; icon-size: 30px, 30px; }"
                                                               "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left:20px; width: 140px; icon-size: 30px, 30px; }"
                                                               "QCalendarWidget QMenu { %1; %3; width: 140px; left: 20px; }"
                                                               "QCalendarWidget QMenu::item { %2; background-color: transparent; padding-top:5px; padding-bottom:5px; padding-left:50px; padding-right:40px; }"
                                                               "QCalendarWidget QMenu::item:selected { %2; background-color: rgb(100, 180, 240); }"
                                                               "QCalendarWidget QSpinBox { %1; %3; width: 140px; selection-background-color: rgb(16, 130, 220); selection-color: rgb(255, 255, 255); }"
                                                               "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width:30px; }"
                                                               "QCalendarWidget QSpinBox::down-button { subcontrol-origin: border; subcontrol-position: bottom right; width:30px; }"
                                                               "QCalendarWidget QSpinBox::up-arrow { width:30px; height:30px; }"
                                                               "QCalendarWidget QSpinBox::down-arrow { width:30px; height:30px; }"
                                                               "QCalendarWidget QWidget { alternate-background-color: rgb(247, 247, 247); }"
                                                               "QCalendarWidget QAbstractItemView:enabled { %2; background-color:  rgb(255, 255, 255); selection-background-color: rgb(100, 180, 240); selection-color: rgb(255, 255, 255); }"
                                                               "QCalendarWidget QAbstractItemView:disabled { color: rgb(200, 200, 200); }")

                                                           .arg("background-color: rgb(255, 255, 255);",
                                                                "font: 14pt \"华文中宋\"; color: rgb(0, 0, 0)",
                                                                "font: 16pt \"华文中宋\"; color: rgb(0, 0, 0)")
                                                       ) ;
}
void Widget::get() {
    if(darkMode == 1) bedark();
    else belight();
}
Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    initScene();
    get();

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
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("设置");
    setWindowIcon(QIcon( GAME_ICON));
    initDateEditUI(ui->startDateEdit, this);
    initSpinBoxUI(ui->totalWeeksEdit, this);
}

void Widget::on_helpButton_clicked()
{
    HelpWidget* hw = new HelpWidget(this);
    hw->show();
}


void Widget::show_myself()
{
    this->show();
    get();
}

void Widget::on_backButton_clicked()
{
    emit showMain();
    this->hide();
}

void Widget::on_totalWeeksEdit_valueChanged(int arg1)
{
    numOfWeek = arg1;
}

//初始化日期控件
void Widget::initDateEditUI(QDateEdit*dateEdit,QWidget*parent)
    {
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDisplayFormat("yyyy-MM-dd");
        dateEdit->setDate(QDate::currentDate());
        dateEdit->setStyleSheet("background-color: rgb(255,255,255)");
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
                    QLineEdit::connect(lineEdit,&QLineEdit::selectionChanged,[=]
                                       {
                                           lineEdit->deselect();
                                       });
                }
                break;
            }
        }

        QCalendarWidget * cale = dateEdit->calendarWidget();
        cale->setMinimumSize(500,290);
        cale->setFont(font);
        cale->setStyleSheet(QString("QCalendarWidget QWidget#qt_calendar_navigationbar { %1; }"
                                    "QCalendarWidget QToolButton { %1; %3; height: 50px; }"
                                    "QCalendarWidget QToolButton#qt_calendar_monthbutton { width: 80px; }"
                                    "QCalendarWidget QToolButton#qt_calendar_yearbutton { width: 140px; }"
                                    "QCalendarWidget QToolButton#qt_calendar_prevmonth { margin-right:20px; width: 140px; icon-size: 30px, 30px; }"
                                    "QCalendarWidget QToolButton#qt_calendar_nextmonth { margin-left:20px; width: 140px; icon-size: 30px, 30px; }"
                                    "QCalendarWidget QMenu { %1; %3; width: 140px; left: 20px; }"
                                    "QCalendarWidget QMenu::item { %2; background-color: transparent; padding-top:5px; padding-bottom:5px; padding-left:50px; padding-right:40px; }"
                                    "QCalendarWidget QMenu::item:selected { %2; background-color: rgb(100, 180, 240); }"
                                    "QCalendarWidget QSpinBox { %1; %3; width: 140px; selection-background-color: rgb(16, 130, 220); selection-color: rgb(255, 255, 255); }"
                                    "QCalendarWidget QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width:30px; }"
                                    "QCalendarWidget QSpinBox::down-button { subcontrol-origin: border; subcontrol-position: bottom right; width:30px; }"
                                    "QCalendarWidget QSpinBox::up-arrow { width:30px; height:30px; }"
                                    "QCalendarWidget QSpinBox::down-arrow { width:30px; height:30px; }"
                                    "QCalendarWidget QWidget { alternate-background-color: rgb(247, 247, 247); }"
                                    "QCalendarWidget QAbstractItemView:enabled { %2; background-color:  rgb(255, 255, 255); selection-background-color: rgb(100, 180, 240); selection-color: rgb(255, 255, 255); }"
                                    "QCalendarWidget QAbstractItemView:disabled { color: rgb(200, 200, 200); }")

                                .arg("background-color: rgb(255, 255, 255);",
                                     "font: 14pt \"华文中宋\"; color: rgb(0, 0, 0)",
                                     "font: 16pt \"华文中宋\"; color: rgb(0, 0, 0)")
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
    startDate = date;
}

void Widget::on_darkModeButton_clicked()
{
    if (ui->darkModeButton->isChecked()) darkMode = true, bedark();
    else darkMode = false, belight();
}
