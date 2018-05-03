#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/javi/Desktop/bee.jpg");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    report = new reportexpense(this);
    report->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    g = new graph(this);
    g->show();

}
