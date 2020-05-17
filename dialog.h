#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void setHtmlPath(QString htmlPath);
    ~Dialog();

protected:
    virtual void resizeEvent(QResizeEvent *event) override;

private:
    Ui::Dialog *ui;
    bool isLoaded;

private slots:
    void on_changebtn();
    void onResizeEcharts();
};

#endif // DIALOG_H
