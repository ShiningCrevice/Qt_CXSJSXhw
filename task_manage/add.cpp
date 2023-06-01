#include "add.h"
#include "ui_add.h"
#include "config.h"


Add::Add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    initScene();

    QStringList strList;
    strList<<"1.课程";
    strList<<"2.事件";
    strList<<"3.ddl";
    ui->comboBox->addItems(strList);
    connect(&son_meet,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_cla,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_ddl,SIGNAL(showMain()),this,SLOT(show_myself()));
}
Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_clicked()
{
    emit showMain();
    this->hide();
}

void Add::show_myself()
{
    emit showMain();
}
void Add::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("增加事件");
    setWindowIcon(QIcon( GAME_ICON));
}
void Add::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    setStyleSheet("background-color: rgb(196,230,255);");
}

void Add::on_pushButton_2_clicked()
{
    int index = ui->comboBox->currentIndex();//获得索引
    this -> hide();
    if(index == 0) {
        son_cla.show();
    }
    else if (index == 1) {
        son_meet.show();
    }
    else {
        son_ddl.show();
    }
}
