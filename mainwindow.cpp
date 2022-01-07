#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
    files.close();
}


void MainWindow::on_pushButton_clicked() //размонтировать
{
    form_unmount.show(); //показать объект размонтирования
}


/*
void MainWindow::on_pushButton_2_clicked()//открыть
{

    way = QFileDialog::getOpenFileName(this, "Выбрать файл с паролями", "/home", "Text Files (*.txt)");
    //ui->textEdit->setText(way);

    // С помощью метода open() открываем файл в режиме чтения
    files.setFileName(way);
    if (!files.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
    }
    // Создаем входящий поток, из которого будут считываться данные, и связываем его с нашим файлом
      QTextStream in(&files);

      // Считываем файл строка за строкой
      while (!in.atEnd()) { // метод atEnd() возвращает true, если в потоке больше нет данных для чтения
        QString line = in.readLine(); // метод readLine() считывает одну строку из потока
        ui->textEdit->append(line);
      }

      // Закрываем файл

}
*/


void MainWindow::on_pushButton_4_clicked()//закрыть
{
    close();
}


void MainWindow::on_pushButton_3_clicked() // создать контейнер
{
    form_create.show(); //показать объект создания контейнера
}


void MainWindow::on_pushButton_5_clicked() // монтировать
{
    form_mount.show(); //показать объект монтирования
}

