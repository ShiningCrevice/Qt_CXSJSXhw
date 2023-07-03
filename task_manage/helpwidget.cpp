#include "helpwidget.h"
#include "ui_helpwidget.h"

extern bool darkMode;

void HelpWidget::get() {
    if (darkMode) {
        setStyleSheet("background-image: url(:/res/res/darkBg.jpg);");
        ui->textBrowser->setStyleSheet("font: 12pt \"华文中宋\"; color: rgb(196, 230, 255);");
        dark_button(ui->pushButton);
    }
    else {
        setStyleSheet("background-image: url(:/res/res/lightBg.jpg);");
        ui->textBrowser->setStyleSheet("font: 12pt \"华文中宋\"; color: rgb(0, 0, 0);");
        light_button(ui->pushButton);
    }
}
HelpWidget::HelpWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::HelpWidget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &QWidget::close);
    get();
    initScene();

}
void HelpWidget::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("帮助文档");
    setWindowIcon(QIcon( GAME_ICON));
}
HelpWidget::~HelpWidget()
{
    delete ui;
}
