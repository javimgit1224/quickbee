#include "reportexpense.h"
#include "ui_reportexpense.h"
reportexpense::reportexpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reportexpense)
{
    ui->setupUi(this);
    ui->widget->hide();
    ui->dateEdit->setDate(QDate::currentDate());
}

reportexpense::~reportexpense()
{
    delete ui;
}

void reportexpense::on_pushButton_clicked()
{
    count++;
    count1++;
    j++;

        vendors.push_back(ui->lineEdit->text());
         amount.push_back(ui->lineEdit_2->text().toDouble());
       accounts.push_back(ui->lineEdit_3->text());
       dates.push_back(ui->dateEdit->text());
    date = dates[j-1];
    ven = vendors[j-1];
    acc = accounts[j-1];
    am = amount[j-1];

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->label_5->setText("Last entered transaction: " + date + " " + ven + " " + acc + " $" + QString::number(am));
    opentext();
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
    j++;

    //save the data to its assigned vector
    vendors.push_back(ui->lineEdit->text());
    amount.push_back(ui->lineEdit_2->text().toDouble());
    accounts.push_back(ui->lineEdit_3->text());
    dates.push_back(ui->dateEdit->text());

    date = dates[j-1];
    ven = vendors[j-1];
    acc = accounts[j-1];
    am = amount[j-1];

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->label_5->setText("Last entered transaction: " + date + " " + ven + " " + acc + " $" + QString::number(am));
    opentext();

    hide();

    makebar();
}

void reportexpense::on_pushButton_4_clicked()
{
    count++;
    count1++;

    hide();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->pushButton_2->setText("GRAPH");
    ui->widget->hide();
}
void reportexpense::opentext()
{
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << "ALL EXPENSES" << endl;
        for (int i = 0; i < j; i++)
        {
            stream << dates[i] << " " << vendors[i] << " " << accounts[i] << " " << amount[i] << endl;

        }
    }
}
