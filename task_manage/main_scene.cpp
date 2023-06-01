#include "main_scene.h"
#include "ui_main_scene.h"
manage_task pax;
#include<QScrollBar>
#include<QDateTime>
#include<QPalette>
#include<QPushButton>

main_scene::main_scene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_scene)
{
    ui->setupUi(this);
    //initScene();
    connect(&son_task,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(ui->btnPlus, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(196, 230, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

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
    son_task.show();
}

void main_scene::show_myself()
{
    this->show();
}

void main_scene::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle(GAME_TITLE);
    setWindowIcon(QIcon( GAME_ICON));
}

void main_scene::paintEvent(QPaintEvent *event)
{
//    Q_UNUSED(event);
//    QStyleOption opt;
//    opt.initFrom(this);
//    QPainter p(this);
//    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
//    setStyleSheet("background-color: rgb(196,230,255);");
}
