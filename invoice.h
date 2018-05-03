#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
#include <QDialog>
#include "viewinvoice.h"
using namespace std;
namespace Ui {
class invoice;
}

class invoice : public QDialog
{
    Q_OBJECT

public:
    explicit invoice(QWidget *parent = 0);
    ~invoice();


private slots:
    void on_pushButton_clicked();

private:
    Ui::invoice *ui;
    QString invoice_number;
    friend class viewinvoice;


};

#endif // INVOICE_H
