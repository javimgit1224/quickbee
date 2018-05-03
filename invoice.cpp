#include "invoice.h"
#include "ui_invoice.h"
#include <string>
using namespace std;

invoice::invoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invoice)
{
    ui->setupUi(this);
}

invoice::~invoice()
{
    delete ui;
}
//when user clicks the save button it will save all the data and send them back to the home page
void invoice::on_pushButton_clicked()
{
  invoice_number = ui->lineEdit->text();
  invoice_number = invoice_number.toInt();



    close();
}
