#include "viewinvoice.h"
#include "ui_viewinvoice.h"

viewinvoice::viewinvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewinvoice)
{
    ui->setupUi(this);
}

viewinvoice::~viewinvoice()
{
    delete ui;
}

void viewinvoice::lineEdit_Changed()
{
    ui->lineEdit->setText(invoice.invoice_number);


}
