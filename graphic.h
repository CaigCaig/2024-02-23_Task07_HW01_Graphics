#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QDialog>
#include "qcustomplot.h"

namespace Ui { class Graphic; }

class Graphic : public QDialog
{
    Q_OBJECT

public:
    explicit Graphic(QWidget *parent = nullptr);
    //explicit Graphic(QCustomPlot* cPlot, uint32_t numGraps);
    ~Graphic();

    /*
    void AddDataToGraph(QVector<double> x, QVector<double> y, uint32_t numGraph);
    void ClearGraph(QCustomPlot* cPlot);
    void UpdateGraph(QCustomPlot* cPlot);
    QCustomPlot *wGraphic;      // Объявляем объект QCustomPlot
    QCPGraph *graph;     // Объявляем объект для вертикальной линии
    QCPItemTracer *tracer;      // Трасировщик по точкам графика
*/

private:
    Ui::Graphic *ui;

    //QList<QCPGraph*> ptrGraph;

};

#endif // GRAPHIC_H
