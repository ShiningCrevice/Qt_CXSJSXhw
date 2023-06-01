#include "delete.h"
#include "ui_delete.h"
#include "manage_task.h"
#include <QMessageBox>

extern manage_task pax;
void Delete :: getlist() {
    ui->comboBox->clear();
    QStringList strList;
    for(int i = 0; i < (int)pax.cla.size(); ++ i) {
        strList << pax.cla[i].name;
    }
    for(int i = 0; i < (int)pax.meet.size(); ++ i) {
        strList << pax.meet[i].name;
    }
    for(int i = 0; i < (int)pax.ddl.size(); ++ i) {
        strList << pax.ddl[i].name;
    }
    ui->comboBox->addItems(strList);
}
Delete::Delete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
    initScene(), getlist();
}
Delete::~Delete()
{
    delete ui;
}
void Delete::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("删除事件");
    setWindowIcon(QIcon( GAME_ICON));
}
void Delete::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    setStyleSheet("background-color: rgb(196,230,255);");
}
void Delete::on_pushButton_2_clicked()
{
    emit showMain();
    this->hide();
}
void Delete::on_pushButton_3_clicked()
{
    QMessageBox MBox;
    MBox.setWindowTitle("确认");
    MBox.setText("您确认要删除该任务吗");
    MBox.setWindowIcon(QPixmap(GAME_ICON));
    QPushButton *agreeBut = MBox.addButton("确认", QMessageBox::AcceptRole);
    QPushButton *disagreeBut = MBox.addButton("返回", QMessageBox::RejectRole);
    MBox.exec();
    if (MBox.clickedButton() == (QAbstractButton*)agreeBut) {
        if(ui->comboBox->count()) {
            int index = ui->comboBox->currentIndex();
            if(index < (int)pax.cla.size()) pax.Del_cla(index);
            else if(index < (int)pax.cla.size() + (int)pax.meet.size()) pax.Del_meet(index - (int)pax.cla.size());
            else pax.Del_ddl(index - (int)pax.cla.size() - (int)pax.meet.size());
        }
        emit showMain();
        this -> hide();
    }
}
