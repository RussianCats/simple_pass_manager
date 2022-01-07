#include "form_create.h"
#include "form_mount.h"
#include "mainwindow.h"


void Form_create::Creates(QString &size, QString &password)
{

    char char_create[256];

    std::string create = "$PWD/bash/create.sh ~/crypt " \
            + size.toStdString() + " " + password.toStdString();
    strcpy(char_create, create.c_str()); // преобразование в тип char
    system(char_create);// выполнение команды в bash


}

void Form_mount::Mount(QString &password_user, QString &password, QString &way)
{
    char char_mount[256];


    std::string mount = "$PWD/bash/mount.sh " + way.toStdString() + "  /tmp/veracrypt_manager " \
            + password.toStdString() + " " + password_user.toStdString();
    strcpy(char_mount, mount.c_str()); // преобразование в тип char
    system(char_mount);// выполнение команды в bash

}


//будет размонтироваться автоматически после завершения редактирования файла pass.txt
void Form_unmount::Unmount(QString &password_user)
{
    char char_unmount[256];

    std::string unmount = "$PWD/bash/unmount.sh /tmp/veracrypt_manager " + password_user.toStdString();
    strcpy(char_unmount, unmount.c_str()); // преобразование в тип char
    system(char_unmount);// выполнение команды в bash



}

