#include "graph.h"
#include "ui_graph.h"

graph::graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::graph)
{
    ui->setupUi(this);
    graph::makePlot();

}

graph::~graph()
{
    delete ui;
}
void graph::makePlot()
{
    QVector<QString> list;
    list << "a" << "b" << "c"<< "d" << "e"<< "f";

    QCPBars *myBars = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    // now we can modify properties of myBars:
    myBars->setName("Account Summary");
    QVector<double> keyData;
    QVector<double> valueData;
    keyData << 1 << 2 << 3 << 4 << 5 << 6;
    valueData << 50.1 << 13.20 << 100.11 << 20 << 30 << 40;
    myBars->setData(keyData, valueData);
    ui->widget->xAxis->setLabel("ACCOUNTS");
    ui->widget->yAxis->setLabel("AMOUNT $ USD");
    QSharedPointer<QCPAxisTickerText> textkey(new QCPAxisTickerText);
    textkey->addTicks(keyData, list);
    ui->widget->xAxis->setTicker(textkey);

    ui->widget->rescaleAxes();
    ui->widget->replot();
}
