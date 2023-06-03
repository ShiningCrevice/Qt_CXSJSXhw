#include "delete.h"
#include "ui_delete.h"
#include "manage_task.h"
#include <QMessageBox>

extern bool darkMode;

extern manage_task paxi;
void Delete :: getlist() {
    ui->comboBox->clear();
    QStringList strList;
    for(int i = 0; i < (int)paxi.cla.size(); ++ i) {
        strList << paxi.cla[i].name;
    }
    for(int i = 0; i < (int)paxi.meet.size(); ++ i) {
        strList << paxi.meet[i].name;
    }
    for(int i = 0; i < (int)paxi.ddl.size(); ++ i) {
        strList << paxi.ddl[i].name;
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
//    setStyleSheet("background-color: rgb(196,230,255);");
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
            if(index < (int)paxi.cla.size()) paxi.Del_cla(index);
            else if(index < (int)paxi.cla.size() + (int)paxi.meet.size()) paxi.Del_meet(index - (int)paxi.cla.size());
            else paxi.Del_ddl(index - (int)paxi.cla.size() - (int)paxi.meet.size());
        }
        emit showMain();
        this -> hide();
    }
}

void Delete::show_self() {
    if (darkMode) {
        setStyleSheet("background-color: rgb(46, 47, 48);");
        ui->label->setStyleSheet("color: rgb(196, 230, 255); font: 22pt \"华文中宋\";");
        ui->pushButton_2->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
        ui->pushButton_3->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
    }
    else {
        setStyleSheet("background-color: rgb(196, 230, 255);");
        ui->label->setStyleSheet("color: rgb(0, 0, 0); font: 22pt \"华文中宋\";");
        ui->pushButton_2->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                                      "stop: 0 rgb(209, 255, 202),"
                                      "stop: 0.495 rgb(170, 255, 127),"
                                      "stop: 0.505 rgb(170, 255, 127), "
                                      "stop: 1 rgb(209, 255, 202));"
                                        "border: none;"
                                        "border-radius: 15px;"
                                        "color: rgb(0, 0, 0);");
        ui->pushButton_3->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                                        "stop: 0 rgb(209, 255, 202),"
                                        "stop: 0.495 rgb(170, 255, 127),"
                                        "stop: 0.505 rgb(170, 255, 127), "
                                        "stop: 1 rgb(209, 255, 202));"
                                        "border: none;"
                                        "border-radius: 15px;"
                                        "color: rgb(0, 0, 0);");
    }
}
