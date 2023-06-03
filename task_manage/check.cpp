#include "check.h"
#include "ui_check.h"
#include "config.h"
#include<QStyleOption>
#include"manage_task.h"
#include<algorithm>
#include<QDate>
#include<QDateTime>
#include<QDebug>
#include<vector>
#include<QBrush>

extern bool darkMode;
extern manage_task paxi;

Check::Check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    initScene();

    refresh();
    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(196, 230, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

Check::~Check()
{
    delete ui;
}

void Check::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("DDL总览");
    setWindowIcon(QIcon( GAME_ICON));
}

void Check::show_self() {
    refresh();
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->btnBack->setStyleSheet("background-color: rgb(64, 66, 68);");
        ui->label->setStyleSheet("color: rgb(196, 230, 255);");
        ui->btnBack->setIcon(QIcon(":/res/res/Image/dark-return.png"));
    }
    else {
        setStyleSheet("backcolor-color: rgb(196, 230, 255);");
        ui->btnBack->setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->label->setStyleSheet("color: rgb(0, 0, 0);");
        ui->btnBack->setIcon(QIcon(":/res/res/Image/return.png"));
    }
}

void Check::on_btnBack_clicked()
{
    emit showMain();
    this->hide();
}

void Check::refresh()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    sort(paxi.ddl.begin(), paxi.ddl.end());
    QDateTime current_date_time = QDateTime::currentDateTime();
    QDate today = current_date_time.date();
    int count = 0;
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        ui->tableWidget->removeRow(i);
    }
    for (auto elem : paxi.ddl) {
        if (elem.date >= today) {
            int num = today.daysTo(elem.date);
            QBrush nullColor(Qt::red);

            ui->tableWidget->insertRow(count);
            QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
            if (num <= 3) {
                QFont nullFont;
                p1->setFont(nullFont);
                p1->setBackground(nullColor);
            }
            ui->tableWidget->setItem(count, 0, p1);
            QString str = elem.date.toString("MM-dd");
            p1 = new QTableWidgetItem(str);
            if (num <= 3) p1->setBackground(nullColor);
            ui->tableWidget->setItem(count, 1, p1);

            QString str2 = QString::number(num, 10);
            p1 = new QTableWidgetItem(str2);
            if (num <= 3) p1->setBackground(nullColor);
            ui->tableWidget->setItem(count, 2, p1);
            count++;
        }
    }

}
