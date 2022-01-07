#ifndef FORM_MOUNT_H
#define FORM_MOUNT_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class Form_mount;
}

class Form_mount : public QWidget
{
    Q_OBJECT

public:
    explicit Form_mount(QWidget *parent = nullptr);

    ~Form_mount();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString password_user, password, way;
    void Mount(QString &, QString &, QString &); // из cbash.cpp

    Ui::Form_mount *ui;
};

#endif // FORM_MOUNT_H
