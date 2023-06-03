#include "main_scene.h"
#include "ui_main_scene.h"
manage_task paxi;
bool darkMode;
#include "widget.h"
#include "nothing.h"
#include<QScrollBar>
#include<QDateTime>
#include<QPalette>
#include<QPushButton>
#include<QDate>
#include<QTime>
QDate startDate;
int numOfWeek;
main_scene::main_scene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_scene)
{
    ui->setupUi(this);
    initScene();
    connect(&son_task,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(ui->btnPlus, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(&son_check,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&pax,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_nothing,SIGNAL(showMain()),this,SLOT(show_myself()));

    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(196, 230, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->btnSet->setStyleSheet("background-color: rgb(196, 230, 255);");
    ui->btnHelp->setStyleSheet("background-color: rgb(196, 230, 255);");

    ui->monTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tueTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->wedTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->thurTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->friTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->setTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->sunTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QDateTime current_date_time = QDateTime::currentDateTime();
    QString date = current_date_time.toString("yyyy-MM-dd ddd");
    ui->dateLabel->setText(date);

}

main_scene::~main_scene()
{
    delete ui;
}

void main_scene::on_pushButton_clicked()
{
    this->hide();
    son_task.show_self();
    son_task.show();
}

void main_scene::show_myself()
{
    refresh();
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->btnPlus->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 5px;padding-left: 14px;");
        ui->btnCheck->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 5px;padding-left: 14px;");
        ui->btnSet->setStyleSheet("background-color: rgb(64, 66, 68);");
        ui->btnHelp->setStyleSheet("background-color: rgb(64, 66, 68);");
//        ui->tabWidget->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(192, 194, 195);");
        ui->dateLabel->setStyleSheet("color: rgb(196, 230, 255);");
        ui->btnPlus->setIcon(QIcon(":/res/res/Image/dark-plus.png"));
        ui->btnHelp->setIcon(QIcon(":/res/res/Image/dark-help.png"));
        ui->btnSet->setIcon(QIcon(":/res/res/Image/dark-set.png"));
        ui->btnCheck->setIcon(QIcon(":/res/res/Image/dark-eye.png"));
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->btnPlus->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,"
                                   "stop: 0 rgb(209, 255, 202),"
                                   "stop: 0.495 rgb(170, 255, 127),"
                                   "stop: 0.505 rgb(170, 255, 127), "
                                   "stop: 1 rgb(209, 255, 202)); border-radius: 5px;"
                                   "color: rgb(0, 0, 0);"
                                   "padding-left: 14px");
        ui->btnCheck->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,"
                                    "stop: 0 rgb(209, 255, 202),"
                                    "stop: 0.495 rgb(170, 255, 127),"
                                    "stop: 0.505 rgb(170, 255, 127), "
                                    "stop: 1 rgb(209, 255, 202)); border-radius: 5px;"
                                    "color: rgb(0, 0, 0);"
                                    "padding-left: 14px");
        ui->btnSet->setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->btnHelp->setStyleSheet("background-color: rgb(196, 230, 255);");
//        ui->tabWidget->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);");
        ui->dateLabel->setStyleSheet("color: rgb(0, 0, 0);");
        ui->btnPlus->setIcon(QIcon(":/res/res/Image/plus.png"));
        ui->btnHelp->setIcon(QIcon(":/res/res/Image/help.png"));
        ui->btnSet->setIcon(QIcon(":/res/res/Image/set.png"));
        ui->btnCheck->setIcon(QIcon(":/res/res/Image/eye.png"));
    }
    this->show();
}

void main_scene::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("DDL规划");
    setWindowIcon(QIcon( GAME_ICON));
}

void main_scene::on_btnSet_clicked()
{
    this->hide();
    pax.show();
}


void main_scene::on_btnCheck_clicked()
{
    this->hide();
    son_check.show_self();
    son_check.show();
}

void main_scene::refresh()
{
    vector<abstract_con> tables[10];
    for (int i = 0; i < 7; i++) {
        tables[i].clear();
    }
    ui->monTableWidget->setRowCount(0);
    ui->tueTableWidget->setRowCount(0);
    ui->wedTableWidget->setRowCount(0);
    ui->thurTableWidget->setRowCount(0);
    ui->friTableWidget->setRowCount(0);
    ui->setTableWidget->setRowCount(0);
    ui->sunTableWidget->setRowCount(0);
    abstract_con *pointer;
    QDateTime current_date_time = QDateTime::currentDateTime();
    int weekday = current_date_time.date().dayOfWeek();
    for (auto elem : paxi.meet) {
        int delta = current_date_time.date().daysTo(elem.date);
        switch (weekday + delta) {
        case 1:
            pointer = new abstract_con(elem);
            tables[0].push_back(*pointer);
            break;
        case 2:
            pointer = new abstract_con(elem);
            tables[1].push_back(*pointer);
            break;
        case 3:
            pointer = new abstract_con(elem);
            tables[2].push_back(*pointer);
            break;
        case 4:
            pointer = new abstract_con(elem);
            tables[3].push_back(*pointer);
            break;
        case 5:
            pointer = new abstract_con(elem);
            tables[4].push_back(*pointer);
            break;
        case 6:
            pointer = new abstract_con(elem);
            tables[5].push_back(*pointer);
            break;
        case 7:
            pointer = new abstract_con(elem);
            tables[6].push_back(*pointer);
            break;
        }
    }
    for (auto elem : paxi.cla) {
        int weekday = startDate.dayOfWeek();
        int weeknum = (startDate.daysTo(current_date_time.date()) + 6 + weekday) / 7;
        if (weeknum <= numOfWeek) {
            if (elem.week_type == 1 && weeknum % 2) {
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
            else if (elem.week_type == 2 && weeknum % 2 == 0)  {
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
            else if (elem.week_type == 0){
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        sort(tables[i].begin(), tables[i].end());
    }

    int count = 0;
    for (auto elem : tables[0]) {
        ui->monTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->monTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->monTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->monTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->monTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[1]) {
        ui->tueTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->tueTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->tueTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->tueTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->tueTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[2]) {
        ui->wedTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->wedTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->wedTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->wedTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->wedTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[3]) {
        ui->thurTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->thurTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->thurTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->thurTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->thurTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[4]) {
        ui->friTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->friTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->friTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->friTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->friTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[5]) {
        ui->setTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->setTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->setTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->setTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->setTableWidget->setItem(count, 3, p1);
    }
    count = 0;
    for (auto elem : tables[6]) {
        ui->sunTableWidget->insertRow(count);
        QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
        ui->sunTableWidget->setItem(count, 0, p1);
        p1 = new QTableWidgetItem(elem.classroom);
        ui->sunTableWidget->setItem(count, 1, p1);
        QString str = elem.startTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str);
        ui->sunTableWidget->setItem(count, 2, p1);
        QString str2 = elem.endTime.toString("hh:mm");
        p1 = new QTableWidgetItem(str2);
        ui->sunTableWidget->setItem(count, 3, p1);
    }
}

void main_scene::on_btnHelp_clicked()
{
    this->hide();
    son_nothing.show_self();
    son_nothing.show();
}

