#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QString>

int i=0,j=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bye_clicked()
{


    ui->lineEdit->clear();
    ui->lineEdit->setText("see you");

    ui->bye_number->clear();
    i++;
    QString dst=QString::number(i);
    ui->bye_number->append(dst);
}

void MainWindow::on_hi_clicked()
{

    ui->lineEdit->clear();
    ui->lineEdit->setText("hello");

    ui->hi_number->clear();
    j++;
    QString dst=QString::number(j);
    ui->hi_number->append(dst);
}

void MainWindow::on_day_actionTriggered(int action)
{
    ui->bye_number->clear();
    ui->hi_number->clear();
    i++;
    j++;
    QString dst_hi=QString::number(j);
    QString dst_bye=QString::number(i);

    ui->hi_number->append(dst_hi);
    ui->bye_number->append(dst_bye);
}
