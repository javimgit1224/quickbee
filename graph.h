#ifndef GRAPH_H
#define GRAPH_H

#include <QDialog>

namespace Ui {
class graph;
}

class graph : public QDialog
{
    Q_OBJECT

public:
    explicit graph(QWidget *parent = 0);
    ~graph();

private slots:
    void makePlot();
private:
    Ui::graph *ui;    
};

#endif // GRAPH_H
