#ifndef FORM_CREATE_H
#define FORM_CREATE_H

#include <QWidget>
#include <QDebug>
#include <string>

namespace Ui {
class Form_create;
}

class Form_create : public QWidget
{
    Q_OBJECT

public:
    explicit Form_create(QWidget *parent = nullptr);
    ~Form_create();

private slots:
    void on_pushButton_clicked();


private:
    void Creates(QString &, QString &); // из cbash.cpp

    Ui::Form_create *ui;
};

#endif // FORM_CREATE_H
