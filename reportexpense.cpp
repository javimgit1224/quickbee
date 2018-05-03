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

void reportexpense::on_pushButton_clicked()
{
   close();

}
