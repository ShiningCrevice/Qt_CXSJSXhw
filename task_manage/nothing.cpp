#include "nothing.h"
#include "ui_nothing.h"
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
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);

        ui->textBrowser->setStyleSheet("font: 16pt \"华文中宋\"; color: rgb(196,230,255); background: transparent;");
        dark_label(ui->label);
        dark_button(ui->pushButton);
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        ui->textBrowser->setStyleSheet("font: 16pt \"华文中宋\"; color: rgb(0,0,0); background: transparent;");
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

