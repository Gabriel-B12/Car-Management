#include "mainwindow.h"

#include <QApplication>
#include <QtCore>
#include "masina.h"

extern QString myfile;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    masina::readfromfile(myfile);

    MainWindow w;
    w.show();

    return a.exec();
}
