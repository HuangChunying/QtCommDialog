#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog w;

    QString htmlpath ="D:/Qt_project/QtCommDialog/demo1/a.html";
    w.setHtmlPath(htmlpath);

    w.show();

    return a.exec();
}
