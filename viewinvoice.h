#ifndef VIEWINVOICE_H
#define VIEWINVOICE_H

#include <QDialog>
#include "invoice.h"
namespace Ui {
class viewinvoice;
}

class viewinvoice : public QDialog
{
    Q_OBJECT

public:
    explicit viewinvoice(QWidget *parent = 0);
    ~viewinvoice();

private slots:
    void lineEdit_Changed();

private:
    Ui::viewinvoice *ui;
};

#endif // VIEWINVOICE_H
