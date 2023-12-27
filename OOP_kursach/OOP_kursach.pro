QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogfish.cpp \
    dialogplant.cpp \
    dialogwaterbody.cpp \
    fish.cpp \
    fishlist.cpp \
    main.cpp \
    mainwindow.cpp \
    plant.cpp \
    plantlist.cpp \
    sqlitedbmanager.cpp \
    waterbody.cpp \
    waterbodylist.cpp

HEADERS += \
    dbmanager.h \
    dialogfish.h \
    dialogplant.h \
    dialogwaterbody.h \
    fish.h \
    fishlist.h \
    mainwindow.h \
    plant.h \
    plantlist.h \
    sqlitedbmanager.h \
    waterbody.h \
    waterbodyguide.h \
    waterbodylist.h

FORMS += \
    dialogfish.ui \
    dialogplant.ui \
    dialogwaterbody.ui \
    fishlist.ui \
    mainwindow.ui \
    plantlist.ui \
    waterbodylist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
