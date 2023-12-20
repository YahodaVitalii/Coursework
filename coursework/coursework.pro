QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    main.cpp \
    mainwindow.cpp \
    payment.cpp \
    sqlitedbmanager.cpp \
    user.cpp \
    userwindow.cpp

HEADERS += \
    account.h \
    dbmanager.h \
    mainwindow.h \
    payment.h \
    sqlitedbmanager.h \
    user.h \
    userwindow.h

FORMS += \
    mainwindow.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
