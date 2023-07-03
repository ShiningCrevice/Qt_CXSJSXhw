#include "delete.h"
#include "ui_delete.h"

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
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        dark_button(ui->pushButton_2);
        dark_button(ui->pushButton_3);
        dark_label(ui->label);
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        light_button(ui->pushButton_2);
        light_button(ui->pushButton_3);
        light_label(ui->label);
    }
}
