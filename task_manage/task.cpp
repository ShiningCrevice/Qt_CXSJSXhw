#include "task.h"
#include "ui_task.h"

extern bool darkMode;

task::task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::task)
{
    ui->setupUi(this);
    initScene();
    connect(&son_add,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_del,SIGNAL(showMain()),this,SLOT(show_myself()));
}


void task::on_pushButton_clicked()
{
    this->hide();
    son_add.show_self();
    son_add.show();
}

void task::on_pushButton_2_clicked()
{
    this->hide();
    son_del.getlist();
    son_del.show_self();
    son_del.show();
}

void task::on_pushButton_3_clicked()
{
    emit showMain();
    this->hide();
}

void task::show_myself()
{
    this->show();
}

task::~task()
{
    delete ui;
}

void task::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("任务管理");
    setWindowIcon(QIcon( GAME_ICON));
}
void task::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
//    setStyleSheet("background-color: rgb(196,230,255);");
}

void task::show_self() {
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->pushButton->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
        ui->pushButton_2->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
        ui->pushButton_3->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->pushButton->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                                      "stop: 0 rgb(209, 255, 202),"
                                      "stop: 0.495 rgb(170, 255, 127),"
                                      "stop: 0.505 rgb(170, 255, 127), "
                                      "stop: 1 rgb(209, 255, 202));"
                                        "border: none;"
                                        "border-radius: 15px;");
        ui->pushButton_2->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                                      "stop: 0 rgb(209, 255, 202),"
                                      "stop: 0.495 rgb(170, 255, 127),"
                                      "stop: 0.505 rgb(170, 255, 127), "
                                      "stop: 1 rgb(209, 255, 202));"
                                      "border: none;"
                                      "border-radius: 15px;");
        ui->pushButton_3->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                                      "stop: 0 rgb(209, 255, 202),"
                                      "stop: 0.495 rgb(170, 255, 127),"
                                      "stop: 0.505 rgb(170, 255, 127), "
                                      "stop: 1 rgb(209, 255, 202));"
                                      "border: none;"
                                      "border-radius: 15px;");
    }
}
