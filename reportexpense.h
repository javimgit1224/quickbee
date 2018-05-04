#ifndef REPORTEXPENSE_H
#define REPORTEXPENSE_H

#include <QDialog>

namespace Ui {
class reportexpense;
}

class reportexpense : public QDialog
{
    Q_OBJECT

public:
    explicit reportexpense(QWidget *parent = 0);
    ~reportexpense();

private slots:
    void on_pushButton_clicked();

    void makebar();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::reportexpense *ui;
    QVector<QString> accounts; //a vector of strings to hold the account name
    QVector<QString> vendors; //a vector of strings to hold the vendor names
    QVector<double> amount; //a vector of doubles to hold the amount from the accounts
    int count = -1;
    int count1 = 1;
    int graphcount = 1;
    int j = 0;
    QString ven,date,acc;
    double am;
    QVector<QString> dates;

};

#endif // REPORTEXPENSE_H
