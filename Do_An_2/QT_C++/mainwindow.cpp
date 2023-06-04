#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDateTime>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("PROJECT INTRODUCTION");
    QPixmap pix("C:/Users/philo/OneDrive/Desktop/HK2-2023/DO AN PID/VER2/Do_An_2/QT_C++/images/Logo_KhoaDien_UTE.jpg");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix2("C:/Users/philo/OneDrive/Desktop/HK2-2023/DO AN PID/VER2/Do_An_2/QT_C++/images/Logo_UTE.jpg");
    int w2=ui->label_pic_ute->width();
    int h2=ui->label_pic_ute->height();
    ui->label_pic_ute->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix3("C:/Users/philo/OneDrive/Desktop/HK2-2023/DO AN PID/VER2/Do_An_2/QT_C++/images/Icon2.jpg");
    int w3=ui->label_pic2->width();
    int h3=ui->label_pic2->height();
    ui->label_pic2->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    QPixmap pix4("C:/Users/philo/OneDrive/Desktop/HK2-2023/DO AN PID/VER2/Do_An_2/QT_C++/images/Icon1.jpg");
    int w4=ui->label_pic3->width();
    int h4=ui->label_pic3->height();
    ui->label_pic3->setPixmap(pix4.scaled(w4,h4,Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    thirDialog= new ThirDialog(this);
    thirDialog->show();
}



