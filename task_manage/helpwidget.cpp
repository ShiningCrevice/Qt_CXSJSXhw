#include "helpwidget.h"
#include "ui_helpwidget.h"


extern bool darkMode;

HelpWidget::HelpWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::HelpWidget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &QWidget::close);

    if (darkMode == false) {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->label->setStyleSheet("font: 20pt \"华文中宋\"; color: rgb(0, 0, 0); background-color: rgb(196, 230, 255);");
        ui->textBrowser->setStyleSheet("font: 12pt \"Microsoft YaHei UI\"; color: rgb(0, 0, 0); background-color: rgb(255, 255, 255);");
        ui->pushButton->setStyleSheet(  "font: 16pt \"华文中宋\";"
                                      "color: rgb(0, 0, 0);"
                                      "background-color: qlineargradient(spread:pad, x1:0, x2:0, y1:0, y2:1,"
                                      "stop: 0 rgb(209, 255, 202), stop: 0.495 rgb(170, 255, 127), stop: 0.505 rgb(170, 255, 127), stop: 1 rgb(209, 255, 202));"
                                      "border-radius: 15px;");
    }
    else {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->label->setStyleSheet("font: 20pt \"华文中宋\"; color: rgb(196, 230, 255); background-color: rgb(46, 47, 48);");
        ui->textBrowser->setStyleSheet("font: 12pt \"Microsoft YaHei UI\"; color: rgb(196, 230, 255); background-color: rgb(64, 66, 68);");
        ui->pushButton->setStyleSheet(  "font: 16pt \"华文中宋\";"
                                      "color: rgb(196, 230, 255);"
                                      "background-color: rgb(64, 66, 68);"
                                      "border-radius: 15px;");
    }
}

HelpWidget::~HelpWidget()
{
    delete ui;
}
