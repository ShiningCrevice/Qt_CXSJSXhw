#include "class.h"
#include "ui_class.h"
#include "manage_task.h"
#include <QLineEdit>
#include <QMessageBox>

#include <darkModeFunctions.h>
extern bool darkMode;

Class::Class(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Class)
{
    ui->setupUi(this);
    initScene();
    QStringList strList1;
    strList1<<"1.每周" <<"2.单周" <<"3.双周";
    ui->comboBox->addItems(strList1);
    QStringList strList2;
    strList2<<"1.周一" <<"2.周二" <<"3.周三" <<"4.周四" <<"5.周五" <<"6.周六" <<"7.周日";
    ui->comboBox_2->addItems(strList2);
}
Class::~Class()
{
    delete ui;
}

void Class::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("增加课程");
    setWindowIcon(QIcon( GAME_ICON));
}
void Class::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
//    setStyleSheet("background-color: rgb(196,230,255);");
}
void Class::on_pushButton_clicked() // 取消
{
    emit showMain();
    this->hide();            //  隐藏
}
class_con temp;

extern manage_task paxi;
void Class::on_pushButton_2_clicked() // 确认
{
    if(temp.startTime > temp.endTime) {
        QMessageBox MBox;
        MBox.setWindowTitle("警告！！！");
        MBox.setText("该课程的时间不合法！");
        MBox.setWindowIcon(QPixmap(GAME_ICON));
        MBox.exec();
    }
    else {
        QMessageBox MBox;
        MBox.setWindowTitle("确认");
        MBox.setText("您确认要增加该任务吗");
        MBox.setWindowIcon(QPixmap(GAME_ICON));
        QPushButton *agreeBut = MBox.addButton("确认", QMessageBox::AcceptRole);
        QPushButton *disagreeBut = MBox.addButton("返回", QMessageBox::RejectRole);
        MBox.exec();
        if(MBox.clickedButton() == (QAbstractButton*)agreeBut)
        {
            paxi.Add_cla(temp);
            emit showMain();
            this ->hide();
        }
    }
}
void Class::on_lineEdit_3_editingFinished()
{
    temp.name = ui->lineEdit_3->text();
}
void Class::on_lineEdit_4_editingFinished()
{
    temp.classroom = ui->lineEdit_4->text();
}
void Class::on_lineEdit_5_editingFinished()
{
    temp.teacher = ui->lineEdit_5->text();
}
void Class::on_timeEdit_userTimeChanged(const QTime &time)
{
    temp.startTime = time;
}
void Class::on_timeEdit_2_userTimeChanged(const QTime &time)
{
    temp.endTime = time;
}
void Class::on_comboBox_activated(int index)
{
    temp.week_type = index;
}


void Class::on_comboBox_2_activated(int index)
{
    temp.day = index;
}
void Class::show_self() {
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        dark_label(ui->label);
        dark_label(ui->label_2);
        dark_label(ui->label_3);
        dark_label(ui->label_4);
        dark_label(ui->label_5);
        dark_label(ui->label_6);
        dark_label(ui->label_7);
        dark_button(ui->pushButton);
        dark_button(ui->pushButton_2);
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        light_label(ui->label);
        light_label(ui->label_2);
        light_label(ui->label_3);
        light_label(ui->label_4);
        light_label(ui->label_5);
        light_label(ui->label_6);
        light_label(ui->label_7);
        light_button(ui->pushButton);
        light_button(ui->pushButton_2);
    }
}

