#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QScrollBar>
#include<QPalette>
#include<QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setFixedSize(75 * ui->tableWidget->columnCount() + 26, 30 * ui->tableWidget->rowCount() + 27);
    QPalette pal(this->palette());

    pal.setColor(QPalette::Window, QColor(170, 255, 255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    QDateTime current_date_time = QDateTime::currentDateTime();
    QString date = current_date_time.toString("yyyy-MM-dd ddd");
    ui->dateLabel->setText(date);
}

MainWindow::~MainWindow()
{
    delete ui;
}
