#include "add.h"
#include "ui_add.h"

#include "darkModeFunctions.h"
extern bool darkMode;

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
}

void Add::on_pushButton_2_clicked()
{
    int index = ui->comboBox->currentIndex();//获得索引
    this -> hide();
    if(index == 0) {
        son_cla.show_self();
        son_cla.show();
    }
    else if (index == 1) {
        son_meet.show_self();
        son_meet.show();
    }
    else {
        son_ddl.show_self();
        son_ddl.show();
    }
}

void Add::show_self() {
    if (darkMode) {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        dark_label(ui->label);
        dark_button(ui->pushButton);
        dark_button(ui->pushButton_2);
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        light_label(ui->label);
        light_button(ui->pushButton);
        light_button(ui->pushButton_2);
    }
}
