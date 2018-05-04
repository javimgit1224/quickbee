#include "reportexpense.h"
#include "ui_reportexpense.h"
reportexpense::reportexpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reportexpense)
{
    ui->setupUi(this);
    ui->widget->hide();
}

reportexpense::~reportexpense()
{
    delete ui;
}

void reportexpense::on_pushButton_clicked()
{
    count++;
    count1++;

        vendors.push_back(ui->lineEdit->text());
         amount.push_back(ui->lineEdit_2->text().toDouble());
       accounts.push_back(ui->lineEdit_3->text());

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();

    makebar();
}
void reportexpense::makebar()
{
    QCPBars *myBars = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    myBars->setName("Account Summary");
    QVector<double> keyData;
    for (int i = 1; i < count1; i++)
    {
        keyData.push_back(i);
    }

    myBars->setData(keyData, amount);
    ui->widget->xAxis->setLabel("ACCOUNTS");
    ui->widget->yAxis->setLabel("AMOUNT $ USD");
    QSharedPointer<QCPAxisTickerText> textkey(new QCPAxisTickerText);
    textkey->addTicks(keyData, accounts);
    ui->widget->xAxis->setTicker(textkey);

    ui->widget->rescaleAxes();
    ui->widget->replot();

}

void reportexpense::on_pushButton_2_clicked()
{
    graphcount++;
    if (graphcount %2 == 0)
    {
        ui->widget->show();
        ui->pushButton_2->setText("Close Graph");

    }
    else
    {
        ui->pushButton_2->setText("GRAPH");
        ui->widget->hide();
    }

}

void reportexpense::on_pushButton_3_clicked()
{
    count++;
    count1++;
    //save the data to its assigned vector
    vendors.push_back(ui->lineEdit->text());
    amount.push_back(ui->lineEdit_2->text().toDouble());
    accounts.push_back(ui->lineEdit_3->text());
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    hide();
    makebar();
}

void reportexpense::on_pushButton_4_clicked()
{
    count++;
    count1++;

    hide();
}
