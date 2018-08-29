#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

void MainWindow::on_hi_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit->setText("hello");
}
