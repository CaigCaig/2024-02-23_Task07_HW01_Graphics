#include "graphic.h"
#include "ui_graphic.h"

Graphic::Graphic(QWidget *parent) :
//Graphic::Graphic(QCustomPlot* cPlot, uint32_t numGraph) :
    QDialog(parent),
    ui(new Ui::Graphic)
{
    ui->setupUi(this);

    /*
    ptrGraph.resize(numGraps);
    for (int i = 0; i<ptrGraph.size(); i++)
    {
        ptrGraph[i] = new QCPGraph(cPlot->xAxis, cPlot->yAxis);
    }

    cPlot->setInteraction(QCP::iRangeZoom, true);
    cPlot->setInteraction(QCP::iRangeDrag, true);

    wGraphic = new QCustomPlot();
    //winGraph = new Graphic(this);
    graph = new QCPGraph(wGraphic->xAxis, wGraphic->yAxis);
    */
}

/*
void Graphic::AddDataToGraph(QVector<double> x, QVector<double> y, uint32_t numGraph)
{
    ptrGraph[numGraph]->addData(x, y);
}

void Graphic::ClearGraph(QCustomPlot *cPlot)
{
    for(int i = 0; i < ptrGraph.size(); i++)
    {
        ptrGraph[i]->data().clear();
    }
    for(int i = 0; i < cPlot->graphCount(); i++)
    {
        cPlot->graph(i)->data()->clear();
    }
    cPlot->replot();
}
*/

Graphic::~Graphic()
{
    delete ui;
}

