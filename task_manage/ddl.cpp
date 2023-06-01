#include "ddl.h"
#include "ui_ddl.h"
#include <QMessageBox>

DDL::DDL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DDL)
{
    ui->setupUi(this);
    initScene();
}
DDL::~DDL()
{
    delete ui;
}
void DDL::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("ddl");
    setWindowIcon(QIcon( GAME_ICON));
}
void DDL::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    setStyleSheet("background-color: rgb(196,230,255);");
}
void DDL::on_pushButton_clicked() // 取消
{
    emit showMain();
    this->hide();
}
ddl_con tmp;
extern manage_task pax;
void DDL::on_pushButton_2_clicked() // 确认
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
        pax.Add_ddl(tmp);
        emit showMain();
        this-> hide();
    }
}
void DDL::on_lineEdit_3_editingFinished()
{
    tmp.name = ui->lineEdit_3->text();
}
void DDL::on_spinBox_valueChanged(int arg1)
{
    tmp.ex_hour = arg1;
}
void DDL::on_spinBox_2_valueChanged(int arg1)
{
    tmp.imp = arg1;
}
void DDL::on_dateEdit_userDateChanged(const QDate &date)
{
    tmp.year = date.year(), tmp.month = date.month(), tmp.day = date.day();
}

