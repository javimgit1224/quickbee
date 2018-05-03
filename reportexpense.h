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

private:
    Ui::reportexpense *ui;
};

#endif // REPORTEXPENSE_H
