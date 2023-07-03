#include "task.h"
#include "ui_task.h"

extern bool darkMode;

task::task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::task)
{
    ui->setupUi(this);
    initScene();
    static QMovie movie(":res/yinglang.gif");
    movie.start();
    ui->label->setMovie(&movie);
    ui->label->show();
    connect(&son_add,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_del,SIGNAL(showMain()),this,SLOT(show_myself()));
}


void task::get() {
    for (int i = 0; i < ui->verticalLayout->count(); ++i) {
        QWidget* widget = ui->verticalLayout->itemAt(i)->widget();
        if (widget && widget->inherits("TextAnimationWidget")) {
            TextAnimationWidget* lineEdit = qobject_cast<TextAnimationWidget*>(widget);
            delete lineEdit;
        }
    }

    TextAnimationWidget *textWidget = new TextAnimationWidget(this);
    textWidget->setText("是你啊，要做什么？");
    textWidget->setStyleSheet("font: 16pt \"华文中宋\";color: rgb(0,0,0); background: transparent;");
    ui->verticalLayout->addWidget(textWidget);
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

void task::show_myself() {
    get();
    static QMovie movie(":res/yinglang.gif");
    movie.start();
    ui->label->setMovie(&movie);
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
}

void task::show_self() {
    get();
    ui->pushButton->setStyleSheet("	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1, stop: 0 rgb(209, 255, 202), stop: 0.495 rgb(170, 255, 127),stop: 0.505 rgb(170, 255, 127), stop: 1 rgb(209, 255, 202)); border-radius: 15px;");
    ui->pushButton->setIcon(QIcon(":/res/res/Image/plus.png"));
    ui->pushButton_2->setStyleSheet("	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1, stop: 0 rgb(209, 255, 202), stop: 0.495 rgb(170, 255, 127),stop: 0.505 rgb(170, 255, 127), stop: 1 rgb(209, 255, 202)); border-radius: 15px;");
    ui->pushButton_2->setIcon(QIcon(":/res/res/Image/del.png"));
    ui->pushButton_3->setStyleSheet("	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1, stop: 0 rgb(209, 255, 202), stop: 0.495 rgb(170, 255, 127),stop: 0.505 rgb(170, 255, 127), stop: 1 rgb(209, 255, 202)); border-radius: 15px;");
    ui->pushButton_3->setIcon(QIcon(":/res/res/Image/return.png"));
    if (darkMode) {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
    }
    static QMovie movie(":res/yinglang.gif");
    movie.start();
    ui->label->setMovie(&movie);
    //ui->label->show();
    this->show();
}
