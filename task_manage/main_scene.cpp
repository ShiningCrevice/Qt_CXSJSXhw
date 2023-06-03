#include "main_scene.h"
#include "ui_main_scene.h"
manage_task pax;
bool darkMode;
#include "widget.h"
#include<QScrollBar>
#include<QDateTime>
#include<QPalette>
#include<QPushButton>
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

    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(196, 230, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

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
    this->show();
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->btnPlus->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 5px;");
        ui->btnCheck->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 5px;");
        ui->btnSet->setStyleSheet("background-color: rgb(64, 66, 68);");
        ui->btnHelp->setStyleSheet("background-color: rgb(64, 66, 68);");
//        ui->tabWidget->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(192, 194, 195);");
        ui->dateLabel->setStyleSheet("color: rgb(196, 230, 255);");
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->btnPlus->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,"
                                   "stop: 0 rgb(209, 255, 202),"
                                   "stop: 0.495 rgb(170, 255, 127),"
                                   "stop: 0.505 rgb(170, 255, 127), "
                                   "stop: 1 rgb(209, 255, 202)); border-radius: 5px;"
                                   "color: rgb(0, 0, 0);");
        ui->btnCheck->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,"
                                    "stop: 0 rgb(209, 255, 202),"
                                    "stop: 0.495 rgb(170, 255, 127),"
                                    "stop: 0.505 rgb(170, 255, 127), "
                                    "stop: 1 rgb(209, 255, 202)); border-radius: 5px;"
                                    "color: rgb(0, 0, 0);");
        ui->btnSet->setStyleSheet("background-color: rgb(255, 255, 255));");
        ui->btnHelp->setStyleSheet("background-color: rgb(255, 255, 255);");
//        ui->tabWidget->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);");
        ui->dateLabel->setStyleSheet("color: rgb(196, 230, 255);");
    }
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

