#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reportexpense.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();    

private slots:
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    reportexpense *report;

    int count = 0;
    int count2 = 0;



};

#endif // MAINWINDOW_H
