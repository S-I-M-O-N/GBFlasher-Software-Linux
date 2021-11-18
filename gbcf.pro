TEMPLATE = app
TARGET = gbcflsh
DEPENDPATH += .
INCLUDEPATH += .

QT += network widgets serialport

#QMAKE_LFLAGS += -static

RESOURCES += qdarkstyle/style.qrc

# Input
HEADERS += src/About.h \
           src/AbstractPort.h \
           src/Console.h \
           src/const.h \
           src/EraseThread.h \
           src/Gui.h \
           src/Logic.h \
           src/ReadFlashThread.h \
           src/ReadRamThread.h \
           src/Settings.h \
           src/WriteFlashThread.h \
           src/WriteRamThread.h \
           src/about.xpm \
           src/ftd2xx.h \
           src/icon.xpm
SOURCES += src/About.cpp \
           src/EraseThread.cpp \
           src/gbcflsh.cpp \
           src/Gui.cpp \
           src/Logic.cpp \
           src/ReadFlashThread.cpp \
           src/ReadRamThread.cpp \
           src/Settings.cpp \
           src/WriteFlashThread.cpp \
           src/WriteRamThread.cpp
RC_FILE = src/res.rc
win32 {
QT += winextras
SOURCES += \
           src/USBPortWin.cpp
HEADERS += \
           src/USBPortWin.h
LIBS += -L"$$PWD/src/lib" -lftd2xx
}
unix {
SOURCES += \
           src/USBPort.cpp
HEADERS += \
           src/USBPort.h
LIBS += -lftdi \
        -lQt5Widgets
exec.path = /usr/bin
exec.files = gbcflsh
INSTALLS += exec config
}

DISTFILES += \
    src/lib/ftd2xx.lib \
    src/icon.xpm
