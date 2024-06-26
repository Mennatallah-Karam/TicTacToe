QT       += core gui sql multimedia testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GameManager.cpp \
    ai_or_2.cpp \
    easy_ai.cpp \
    easyhard.cpp \
    game_or_history.cpp \
    gameai.cpp \
    gamewindow1.cpp \
    main.cpp \
    mainwindow.cpp \
    register_dialog.cpp \
    replaygame.cpp

HEADERS += \
    GameManager.h \
    Register.h \
    ai_or_2.h \
    easy_ai.h \
    easyhard.h \
    gameAIcpp \
    game_or_history.h \
    gameai.h \
    gamewindow1.h \
    globals.h \
    mainwindow.h \
    register_dialog.h \
    replaygame.h \

FORMS += \
    ai_or_2.ui \
    easy_ai.ui \
    easy_or_hard.ui \
    easyhard.ui \
    game_or_history.ui \
    gameai.ui \
    gamewindow1.ui \
    mainwindow.ui \
    register_dialog.ui \
    replaygame.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc \
    res.qrc

DISTFILES += \
    finalqmakeproject.pro.user \
    tst_ganeisover.qml \
    tst_register.qml \
    tst_reset.qml \
    tst_switich.qml \
    tst_userlogin.qml
