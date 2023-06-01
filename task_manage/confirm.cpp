#include "confirm.h"
#include "ui_confirm.h"


Confirm::Confirm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirm)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget(this);

    QLabel *label = new QLabel(widget);
    label->setText("请问您确认需要删除该事件吗？");
    label->setAlignment(Qt::AlignCenter);//居中显示

    QFont font ( "华文中宋", 14, 75);
    label->setFont(font);

    QGridLayout *gridlayout = new QGridLayout(widget);
    gridlayout->addWidget(label,0,0,1,1);
    widget->setLayout(gridlayout);

    initScene();
}

Confirm::~Confirm()
{
    delete ui;
}
void Confirm::initScene()
{
    setWindowTitle("确认");

    setWindowIcon(QIcon( GAME_ICON));
}
void Confirm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    setStyleSheet("background-color: rgb(196,230,255);");
}

void Confirm::on_pushButton_4_clicked() // 取消
{
    this->hide();
}

void Confirm::on_pushButton_3_clicked() // 确认
{
    emit showMain();
    this->hide();
}

