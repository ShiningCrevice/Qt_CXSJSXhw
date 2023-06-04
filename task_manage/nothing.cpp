#include "nothing.h"
#include "ui_nothing.h"
#include "config.h"

#include <QWidget>

#include "darkModeFunctions.h"
extern bool darkMode;

Nothing::Nothing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nothing)
{
    ui->setupUi(this);
    initScene();
}

Nothing::~Nothing()
{
    delete ui;
}

void Nothing::show_self() {
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->textBrowser->setStyleSheet("font: 12pt \"Microsoft YaHei UI\"; color: rgb(196, 230, 255); background-color: rgb(64, 66, 68);");
        dark_label(ui->label);
        dark_button(ui->pushButton);
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->textBrowser->setStyleSheet("font: 12pt \"Microsoft YaHei UI\"; color: rgb(0, 0, 0); background-color: rgb(255, 255, 255);");
        light_label(ui->label);
        light_button(ui->pushButton);
    }
}

void Nothing::on_pushButton_clicked()
{
    emit showMain();
    this->hide();
}

void Nothing::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("DDL规划");
    setWindowIcon(QIcon( GAME_ICON));
}

