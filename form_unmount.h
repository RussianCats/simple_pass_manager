#ifndef FORM_UNMOUNT_H
#define FORM_UNMOUNT_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Form_unmount;
}

class Form_unmount : public QWidget
{
    Q_OBJECT

public:
    explicit Form_unmount(QWidget *parent = nullptr);
    ~Form_unmount();

private slots:
    void on_pushButton_clicked();

private:
    QString password_user;
    void Unmount(QString &); // из cbash.cpp
    Ui::Form_unmount *ui;
};

#endif // FORM_UNMOUNT_H
