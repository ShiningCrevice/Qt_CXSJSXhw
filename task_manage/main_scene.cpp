#include "main_scene.h"
#include "ui_main_scene.h"
#include<QDebug>
manage_task paxi;
bool darkMode;
QDate startDate;
int numOfWeek;
void main_scene::get() {
    if (darkMode) {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/darkBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        refresh();

        ui->btnPlus->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg); color: rgb(196, 230, 255); border-radius: 5px;padding-left: 14px;");
        ui->btnCheck->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg); color: rgb(196, 230, 255); border-radius: 5px;padding-left: 14px;");
        ui->btnSet->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg);");
        ui->btnHelp->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg);");
        ui->btnPlus->setIcon(QIcon(":/res/res/Image/dark-plus.png"));
        ui->btnHelp->setIcon(QIcon(":/res/res/Image/dark-help.png"));
        ui->btnSet->setIcon(QIcon(":/res/res/Image/dark-set.png"));
        ui->btnCheck->setIcon(QIcon(":/res/res/Image/dark-eye.png"));
        ui->tabWidget->setStyleSheet("QTabBar::tab:selected{ font: 11pt \"华文中宋\";background-color: rgb(33,83,110); color: rgb(196, 230, 255); } "
                                     "QTabBar::tab:!selected{ font: 11pt \"华文中宋\";background-color: rgb(8,12,41); color: rgb(196, 230, 255); }"
                                     "QWidget{ font: 11pt \"华文中宋\";background-color: rgb(33,83,110); color: rgb(196, 230, 255); }");
        ui->dateLabel->setStyleSheet("color: rgb(196, 230, 255); background: transparent;");
        QTableWidget *pointers[7] = {ui->monTableWidget, ui->tueTableWidget, ui->wedTableWidget, ui->thurTableWidget, ui->friTableWidget, ui->setTableWidget, ui->sunTableWidget};
        //QLabel *pointers2[7] = {ui->label, ui->label_2, ui->label_3, ui->label_4, ui->label_5, ui->label_6, ui->label_7};
        for (int i = 0; i < 7; i++) pointers[i]->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:rgb(8,12,41);}");
        for (int i = 0; i < 7; i++) pointers[i]->verticalHeader()->setStyleSheet("QHeaderView::section {background-color:rgb(8,12,41);}");
        //for (int i = 0; i < 7; i++) pointers2[i]->setStyleSheet("background-color: rgb(196, 230, 255");
    }
    else {
        QPalette palette;
        QPixmap backgroundImage(":/res/res/lightBg.jpg");
        palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
        refresh();

        ui->btnPlus->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg); border-radius: 5px;"
                                   "color: rgb(0, 0, 0);"
                                   "padding-left: 14px");
        ui->btnCheck->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg); border-radius: 5px;"
                                    "color: rgb(0, 0, 0);"
                                    "padding-left: 14px");
        ui->btnSet->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg);");
        ui->btnHelp->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg);");
        ui->btnPlus->setIcon(QIcon(":/res/res/Image/plus.png"));
        ui->btnHelp->setIcon(QIcon(":/res/res/Image/help.png"));
        ui->btnSet->setIcon(QIcon(":/res/res/Image/set.png"));
        ui->btnCheck->setIcon(QIcon(":/res/res/Image/eye.png"));

        ui->tabWidget->setStyleSheet("font: 11pt \"华文中宋\";");
        QTableWidget *pointers[7] = {ui->monTableWidget, ui->tueTableWidget, ui->wedTableWidget, ui->thurTableWidget, ui->friTableWidget, ui->setTableWidget, ui->sunTableWidget};
        for (int i = 0; i < 7; i++) pointers[i]->horizontalHeader()->setStyleSheet(""), pointers[i]->verticalHeader()->setStyleSheet("");
        ui->dateLabel->setStyleSheet("color: rgb(0, 0, 0); background: transparent;");
    }
}
main_scene::main_scene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainscene)
{
    ui->setupUi(this);
    initScene();
    connect(&son_task,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(ui->btnPlus, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(&son_check,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&pax,SIGNAL(showMain()),this,SLOT(show_myself()));
    connect(&son_nothing,SIGNAL(showMain()),this,SLOT(show_myself()));

    QPalette pal(this->palette());
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    ui->monTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tueTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->wedTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->thurTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->friTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->setTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->sunTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QDateTime current_date_time = QDateTime::currentDateTime();
    QString date = current_date_time.toString("yyyy-MM-dd ddd");
    ui->dateLabel->setText(date);

}

main_scene::~main_scene()
{
    delete ui;
}

void main_scene::on_pushButton_clicked()
{
    this->hide();
    son_task.show_self();
}

void main_scene::show_myself()
{
    get();
    this->show();
}

void main_scene::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle("DDL规划");
    setWindowIcon(QIcon( GAME_ICON));
    get();
}

void main_scene::on_btnSet_clicked()
{
    this->hide();
    pax.show();
}


void main_scene::on_btnCheck_clicked()
{
    this->hide();
    son_check.show_self();
}

void main_scene::refresh()
{
    vector<abstract_con> tables[7];
    for (int i = 0; i < 7; i++) {
        tables[i].clear();
    }
    ui->monTableWidget->setRowCount(0);
    ui->tueTableWidget->setRowCount(0);
    ui->wedTableWidget->setRowCount(0);
    ui->thurTableWidget->setRowCount(0);
    ui->friTableWidget->setRowCount(0);
    ui->setTableWidget->setRowCount(0);
    ui->sunTableWidget->setRowCount(0);
    abstract_con *pointer;
    QDateTime current_date_time = QDateTime::currentDateTime();
    int weekday = current_date_time.date().dayOfWeek();
    for (auto elem : paxi.meet) {
        int delta = current_date_time.date().daysTo(elem.date);
        int tmp = weekday + delta;
        pointer = new abstract_con(elem);
        tables[tmp - 1].push_back(*pointer);
    }
    for (auto elem : paxi.cla) {
        int weekday = startDate.dayOfWeek();
        int weeknum = (startDate.daysTo(current_date_time.date()) + 6 + weekday) / 7;
        if (weeknum <= numOfWeek) {
            if (elem.week_type == 1 && weeknum % 2) {
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
            else if (elem.week_type == 2 && weeknum % 2 == 0)  {
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
            else if (elem.week_type == 0){
                pointer = new abstract_con(elem);
                tables[elem.day].push_back(*pointer);
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        sort(tables[i].begin(), tables[i].end());
    }
    QTableWidget *pointers[7] = {ui->monTableWidget, ui->tueTableWidget, ui->wedTableWidget, ui->thurTableWidget, ui->friTableWidget, ui->setTableWidget, ui->sunTableWidget};

    int count = 0;
    for (int i = 0; i < 7; i++) {
        count = 0;
        for (auto elem : tables[i]) {
            pointers[i]->insertRow(count);
            QTableWidgetItem *p1 = new QTableWidgetItem(elem.name);
            pointers[i]->setItem(count, 0, p1);
            p1 = new QTableWidgetItem(elem.classroom);
            pointers[i]->setItem(count, 1, p1);
            QString str = elem.startTime.toString("hh:mm");
            p1 = new QTableWidgetItem(str);
            pointers[i]->setItem(count, 2, p1);
            QString str2 = elem.endTime.toString("hh:mm");
            p1 = new QTableWidgetItem(str2);
            pointers[i]->setItem(count, 3, p1);
            count++;
        }
        //qDebug() << count;
        if (count == 0)
            pointers[i]->insertRow(count);
    }
}

void main_scene::on_btnHelp_clicked()
{
    this->hide();
    son_nothing.show_self();
    son_nothing.show();
}
