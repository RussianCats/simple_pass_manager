#include "form_mount.h"
#include "ui_form_mount.h"

Form_mount::Form_mount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_mount)
{
    ui->setupUi(this);
}

Form_mount::~Form_mount()
{
    delete ui;
}

void Form_mount::on_pushButton_clicked()
{
    //пароль USER
    QString password_user = ui->textEdit_2->toPlainText();
    QStringList password_userList = password_user.split('\n'); // разбиваем строку из текстедита на отдельные строки
    password_user = password_userList.at(0); // берем вторую строку
    //пароль файла
    QString password = ui->textEdit->toPlainText();
    QStringList passwordList = password.split('\n'); // разбиваем строку из текстедита на отдельные строки
    password = passwordList.at(0); // берем вторую строку

    //qDebug() << size << " " << pass;
    Mount(password_user, password, way);
}


void Form_mount::on_pushButton_2_clicked() // нахождение пути
{
    way = QFileDialog::getOpenFileName(this, "Выбрать файл с паролями", "/home", "VeraCrypt (*)");
    ui->textEdit_3->setText(way);

}

