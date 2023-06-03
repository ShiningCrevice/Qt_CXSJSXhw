#include "check.h"
#include "ui_check.h"
#include "config.h"
#include<QStyleOption>

extern bool darkMode;

Check::Check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    initScene();

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
    setWindowTitle("增加事件");
    setWindowIcon(QIcon( GAME_ICON));
}

void Check::show_self() {
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->btnBack->setStyleSheet("background-color: rgb(64, 66, 68);");
        ui->label->setStyleSheet("color: rgb(196, 230, 255);");
    }
    else {
        setStyleSheet("backcolor-color: rgb(196, 230, 255);");
        ui->btnBack->setStyleSheet("background-color: rgb(255, 255, 255);");
        ui->label->setStyleSheet("color: rgb(0, 0, 0);");
    }
}

void Check::on_btnBack_clicked()
{
    emit showMain();
    this->hide();
}
