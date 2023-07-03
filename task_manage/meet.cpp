#include "meet.h"
#include "ui_meet.h"
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
    ui->dateEdit->setDate(QDate::currentDate());
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
extern manage_task paxi;
void Meet::on_pushButton_2_clicked() // 确认
{
    if(tp.startTime > tp.endTime) {
        QMessageBox MBox;
        MBox.setWindowTitle("警告！！！");
        MBox.setText("该事件的时间不合法！");
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
            paxi.Add_meet(tp);
            emit showMain();
            this->hide();
        }
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
    tp.date = date;
}
void Meet::on_timeEdit_userTimeChanged(const QTime &time)
{
    tp.startTime = time;
}
void Meet::on_timeEdit_2_userTimeChanged(const QTime &time)
{
    tp.endTime = time;
}

void Meet::show_self() {
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    if (darkMode) {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
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
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
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
