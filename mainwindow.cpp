#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QString>
#include<time.h>


int i=0,j=0,day=0,a;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //window 最大最小無効
    //this->setWindowFlags(Qt::Window|Qt::WindowCloseButtonHint);
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
    if(i==j)
    {
            ui->lineEdit->setText("Nice tomeet you");
    }
    QString dst=QString::number(i);
    ui->bye_number->append(dst);
    check_draw();
}

void MainWindow::on_hi_clicked()
{

    ui->lineEdit->clear();
    ui->lineEdit->setText("hello");

    ui->hi_number->clear();
    j++;

    if(i==j)
    {
            ui->lineEdit->setText("Nice tomeet you");
    }

    QString dst=QString::number(j);
    ui->hi_number->append(dst);
    check_draw();
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


    if(i>j)ui->lineEdit->setText("see you");
    else if(i<j)ui->lineEdit->setText("hello");
    else
    {
            ui->lineEdit->setText("Nice tomeet you");
    }
    check_draw();
}

void MainWindow::on_liset_button_clicked()
{
    ui->bye_number->clear();
    ui->hi_number->clear();
    i=0;
    j=0;

    QString dst_hi=QString::number(j);
    QString dst_bye=QString::number(i);

    ui->hi_number->append(dst_hi);
    ui->bye_number->append(dst_bye);
    check_draw();
}
void MainWindow::on_spinBox_valueChanged(const QString &arg1)
{
    ui->bye_number->clear();
    ui->hi_number->clear();
    a=arg1.toInt();
    ui->spinBox->setValue(a);
    i=i+a;
    j=j+a;
    QString dst_hi=QString::number(j);
    QString dst_bye=QString::number(i);

    ui->hi_number->append(dst_hi);
    ui->bye_number->append(dst_bye);
    check_draw();
}
    void MainWindow::check_draw()
{
    if(i>j)
    {
        ui->compare->setText(">");
    }
    else if(i<j)
    {
        ui->compare->setText("<");
    }
    else
    {
            ui->lineEdit->setText("Nice tomeet you");
            ui->compare->setText("=");
    }
}
