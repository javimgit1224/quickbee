#include "reportexpense.h"
#include "ui_reportexpense.h"

reportexpense::reportexpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reportexpense)
{
    ui->setupUi(this);
}

reportexpense::~reportexpense()
{
    delete ui;
}
//this is the save and close button
//the value should be saved into the vectors and then close the window
void reportexpense::on_pushButton_clicked()
{
    //save the data to its assigned vector
    vendors.push_back(ui->lineEdit->text());
    amount.push_back(ui->lineEdit_2->text().toDouble());
    accounts.push_back(ui->lineEdit_3->text());
    //close the window
   close();

}
