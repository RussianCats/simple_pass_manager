#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>

#include <form_create.h>
#include <form_mount.h>
#include <form_unmount.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QString way;
    QFile files;
    ~MainWindow();
private slots:

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    // создание объектов классов
    Form_create form_create;
    Form_mount form_mount;
    Form_unmount form_unmount;


};
#endif // MAINWINDOW_H
