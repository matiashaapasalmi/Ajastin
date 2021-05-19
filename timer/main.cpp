#include "mainwindow.hh"
#include <QApplication>
//Tekija: Matias Haapasalmi
//sahkoposti: matias.haapasalmi@live.com
//puh: 0443480007

//Ohjelma on yksinkertainen ajastin, jossa on neljä komentoa.
//Start komento käynnistää ajastimen siitä kohdasta missä se on.
//Reset nollaa ajastimen, Stop pysäyttää ajastimen ja close komento sulkee ohjelman.
//Ohjelma on toteutettu Qtimer:a hyödyntäen.

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
