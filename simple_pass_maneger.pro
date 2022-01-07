QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cbash.cpp \
    form_create.cpp \
    form_mount.cpp \
    form_unmount.cpp \
    main.cpp \
    mainwindow.cpp





HEADERS += \
    form_create.h \
    form_mount.h \
    form_unmount.h \
    mainwindow.h

FORMS += \
    form_create.ui \
    form_mount.ui \
    form_unmount.ui \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




# копирование файлов
copydata.commands = $(COPY_DIR) $$PWD/bash $$OUT_PWD
first.depends = $(first) copydata
export(first.depends)
export(copydata.commands)
QMAKE_EXTRA_TARGETS += first copydata

DISTFILES += \
    bash/create.sh \
    bash/mount.sh \
    bash/unmount.sh






