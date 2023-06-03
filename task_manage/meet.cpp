#include "meet.h"
#include "ui_meet.h"
#include <QMessageBox>

#include "darkModeFunctions.h"
extern bool darkMode;

Meet::Meet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Meet)
{
    ui->setupUi(this);
    initScene();
}
Meet::~Meet()
{
    delete ui;
}
void Meet::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("增加事件");
    setWindowIcon(QIcon( GAME_ICON));
}
void Meet::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
//    setStyleSheet("background-color: rgb(196,230,255);");
}
void Meet::on_pushButton_clicked() // 取消
{
    emit showMain();
    this->hide();
}
meet_con tp;
extern manage_task pax;
void Meet::on_pushButton_2_clicked() // 确认
{
    QMessageBox MBox;
    MBox.setWindowTitle("确认");
    MBox.setText("您确认要增加该任务吗");
    MBox.setWindowIcon(QPixmap(GAME_ICON));
    QPushButton *agreeBut = MBox.addButton("确认", QMessageBox::AcceptRole);
    QPushButton *disagreeBut = MBox.addButton("返回", QMessageBox::RejectRole);
    MBox.exec();
    if(MBox.clickedButton() == (QAbstractButton*)agreeBut)
    {
        pax.Add_meet(tp);
        emit showMain();
        this->hide();
    }
}
void Meet::on_lineEdit_5_editingFinished()
{
    tp.name = ui->lineEdit_5->text();
}
void Meet::on_lineEdit_4_editingFinished()
{
    tp.classroom = ui->lineEdit_4->text();
}
void Meet::on_dateEdit_userDateChanged(const QDate &date)
{
    tp.year = date.year(), tp.month = date.month(), tp.day = date.day();
}
void Meet::on_timeEdit_userTimeChanged(const QTime &time)
{
    tp.start_hour = time.hour();
    tp.start_min = time.minute();
}
void Meet::on_timeEdit_2_userTimeChanged(const QTime &time)
{
    tp.end_hour = time.hour();
    tp.end_min = time.minute();
}

void Meet::show_self() {
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        dark_label(ui->label);
        dark_label(ui->label_2);
        dark_label(ui->label_3);
        dark_label(ui->label_5);
        dark_label(ui->label_7);
        dark_label(ui->label_9);
        dark_button(ui->pushButton);
        dark_button(ui->pushButton_2);
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        light_label(ui->label);
        light_label(ui->label_2);
        light_label(ui->label_3);
        light_label(ui->label_5);
        light_label(ui->label_7);
        light_label(ui->label_9);
        light_button(ui->pushButton);
        light_button(ui->pushButton_2);
    }
}