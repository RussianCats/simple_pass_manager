#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*

    if(QFile::exists(w.way))//проверка сущес-ия файла
    {
    qDebug() << "Файл существует";
    }
    file.open(QIODevice::WriteOnly); //;
    file.flush();   //принудительное сохранение файла
    file.close();
    */


    return a.exec();
}
