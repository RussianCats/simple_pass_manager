#include "form_unmount.h"
#include "ui_form_unmount.h"

Form_unmount::Form_unmount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_unmount)
{
    ui->setupUi(this);
}

Form_unmount::~Form_unmount()
{
    delete ui;
}

void Form_unmount::on_pushButton_clicked()
{
    //считываем пароль USER
    QString password_user = ui->textEdit->toPlainText();
    QStringList password_userList = password_user.split('\n'); // разбиваем строку из текстедита на отдельные строки
    password_user = password_userList.at(0); // берем вторую строку
    qDebug() << password_user;
    Unmount(password_user);
}

