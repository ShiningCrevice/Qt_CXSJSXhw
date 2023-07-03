#include "check.h"
#include "ui_check.h"

extern bool darkMode;
extern manage_task paxi;

Check::Check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    initScene();

    refresh();
    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(196, 230, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

Check::~Check()
{
    delete ui;
}

void Check::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("DDL总览");
    setWindowIcon(QIcon( GAME_ICON));
}

void Check::show_self() {
    refresh();
    if (darkMode) {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        ui->btnBack->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg);");
        ui->label->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
        ui->btnBack->setIcon(QIcon(":/res/res/Image/dark-return.png"));
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        ui->btnBack->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg);");
        ui->label->setStyleSheet("color: rgb(0, 0, 0); background: transparent;");
        ui->btnBack->setIcon(QIcon(":/res/res/Image/return.png"));
    }
    static QMovie movie(":res/yinglang.gif");
    movie.start();
    ui->label_2->setMovie(&movie);
    this->show();
}

void Check::on_btnBack_clicked()
{
    emit showMain();
    this->hide();
}
void Check::get1() {
    for (int i = 0; i < ui->verticalLayout->count(); ++i) {
        QWidget* widget = ui->verticalLayout->itemAt(i)->widget();
        if (widget && widget->inherits("TextAnimationWidget")) {
            TextAnimationWidget* lineEdit = qobject_cast<TextAnimationWidget*>(widget);
            delete lineEdit;
        }
    }

    TextAnimationWidget *textWidget = new TextAnimationWidget(this);
    textWidget->setText("该做的事都做完了？\n好,别到睡觉了才想起有\n该做的事没有做！");
    textWidget->setStyleSheet("font: 16pt \"华文中宋\";color: rgb(0,0,0); background: transparent;");
    ui->verticalLayout->addWidget(textWidget);
}
void Check::get2() {
    for (int i = 0; i < ui->verticalLayout->count(); ++i) {
        QWidget* widget = ui->verticalLayout->itemAt(i)->widget();
        if (widget && widget->inherits("TextAnimationWidget")) {
            TextAnimationWidget* lineEdit = qobject_cast<TextAnimationWidget*>(widget);
            delete lineEdit;
        }
    }

    TextAnimationWidget *textWidget = new TextAnimationWidget(this);
    textWidget->setText("你有紧急的ddl要完成，\n看来你有一段时间不能\n上线了呢~");
    textWidget->setStyleSheet("font: 16pt \"华文中宋\";color: rgb(0,0,0); background: transparent;");
    ui->verticalLayout->addWidget(textWidget);
}
void Check::refresh()
{
    int flag = 0;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    sort(paxi.ddl.begin(), paxi.ddl.end());
    QDateTime current_date_time = QDateTime::currentDateTime();
    QDate today = current_date_time.date();
    int count = 0;
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        ui->tableWidget->removeRow(i);
    }
    for (auto elem : paxi.ddl) {
        if (elem.date >= today) {
            int num = today.daysTo(elem.date);
            QBrush nullColor(Qt::red);

            ui->tableWidget->insertRow(count);
            QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
            if (num <= 3) {
                QFont nullFont;
                p1->setFont(nullFont);
                p1->setBackground(nullColor);
                flag = 1;
            }
            ui->tableWidget->setItem(count, 0, p1);
            QString str = elem.date.toString("MM-dd");
            p1 = new QTableWidgetItem(str);
            if (num <= 3) p1->setBackground(nullColor);
            ui->tableWidget->setItem(count, 1, p1);

            QString str2 = QString::number(num, 10);
            p1 = new QTableWidgetItem(str2);
            if (num <= 3) p1->setBackground(nullColor);
            ui->tableWidget->setItem(count, 2, p1);
            count++;
        }
    }
    if(flag == 1) get2();
    else get1();
}
