#include "dialog.h"
#include "ui_dialog.h"
#include <QtWebEngineWidgets/QWebEngineView>
#include <QJsonObject>
#include <QJsonArray>
#include <QString>
#include <QJsonDocument>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    isLoaded = false;
    connect(ui->pushButton_2,SIGNAL(clicked()),this, SLOT(onResizeEcharts()));
}

void Dialog::setHtmlPath(QString htmlPath)
{
    ui->ganttChart->setContextMenuPolicy(Qt::NoContextMenu);
    ui->ganttChart->load(QUrl(htmlPath));

}

void Dialog::on_changebtn()
{
//    ui->ganttChart->load(QUrl("https://baidu.com"));
       QJsonObject seriesData;
       QJsonArray data1 = {1, 3, 9, 27, 81, 247};
       seriesData.insert("data1", data1);

       QString optionStr = QJsonDocument(seriesData).toJson();
       QString js = QString("init2(%1)").arg(optionStr);
       ui->ganttChart->page()->runJavaScript(js);

}
void Dialog::resizeEvent(QResizeEvent *event)
{
    if(isLoaded)
        onResizeEcharts();
}

void Dialog::onResizeEcharts()
{
    isLoaded = true;
    QJsonObject sizeData;
    sizeData.insert("width", ui->ganttChart->width() - 20);
    sizeData.insert("height", ui->ganttChart->height() - 20);
    QString sizeStr = QJsonDocument(sizeData).toJson();
    QString js = QString("setSize(%1)").arg(sizeStr);
    ui->ganttChart->page()->runJavaScript(js);
}


Dialog::~Dialog()
{
    delete ui;
}
