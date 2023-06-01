#include "task.h"
#include "ui_task.h"

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
    son_add.show();
}

void task::on_pushButton_2_clicked()
{
    this->hide();
    son_del.getlist();
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
    setStyleSheet("background-color: rgb(196,230,255);");
}
