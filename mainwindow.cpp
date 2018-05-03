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
//when the user clicks the invoice button the invoice window will open
void MainWindow::on_pushButton_clicked()
{
    //create the invoice window and show it
   // hide();
    in = new invoice(this);
    in->show();
}
//when the user clicks the invoice buton the view invoice window will open
void MainWindow::on_pushButton_3_clicked()
{
    view = new viewinvoice(this);
    view->show();

}
