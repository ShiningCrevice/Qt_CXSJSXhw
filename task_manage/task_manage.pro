QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    check.cpp \
    class.cpp \
    darkModeFunctions.cpp \
    ddl.cpp \
    delete.cpp \
    event_con.cpp \
    helpwidget.cpp \
    main.cpp \
    main_scene.cpp \
    manage_task.cpp \
    meet.cpp \
    task.cpp \
    widget.cpp

HEADERS += \
    add.h \
    check.h \
    class.h \
    config.h \
    darkModeFunctions.h \
    ddl.h \
    delete.h \
    event_con.h \
    helpwidget.h \
    main_scene.h \
    manage_task.h \
    meet.h \
    task.h \
    widget.h

FORMS += \
    add.ui \
    check.ui \
    class.ui \
    ddl.ui \
    delete.ui \
    helpwidget.ui \
    main_scene.ui \
    meet.ui \
    task.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
