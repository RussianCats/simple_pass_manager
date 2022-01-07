#include "form_create.h"
#include "ui_form_create.h"


Form_create::Form_create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_create)
{
    ui->setupUi(this);   
}

Form_create::~Form_create()
{
    delete ui;
}

void Form_create::on_pushButton_clicked()
{
    //считываем размер
    QString size = ui->textEdit->toPlainText();
    QStringList sizeList = size.split('\n'); // разбиваем строку из текстедита на отдельные строки
    size = sizeList.at(0); // берем вторую строку
    //пароль
    QString password = ui->textEdit_2->toPlainText();
    QStringList passwordList = password.split('\n'); // разбиваем строку из текстедита на отдельные строки
    password = passwordList.at(0); // берем вторую строку

    //qDebug() << size << " " << pass;
    Creates(size, password);


}

