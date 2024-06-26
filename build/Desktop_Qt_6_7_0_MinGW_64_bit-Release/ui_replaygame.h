/********************************************************************************
** Form generated from reading UI file 'replaygame.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLAYGAME_H
#define UI_REPLAYGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplayGame
{
public:
    QGridLayout *gridLayout_2;

    void setupUi(QDialog *ReplayGame)
    {
        if (ReplayGame->objectName().isEmpty())
            ReplayGame->setObjectName("ReplayGame");
        ReplayGame->resize(400, 300);
        gridLayout_2 = new QGridLayout(ReplayGame);
        gridLayout_2->setObjectName("gridLayout_2");

        retranslateUi(ReplayGame);

        QMetaObject::connectSlotsByName(ReplayGame);
    } // setupUi

    void retranslateUi(QDialog *ReplayGame)
    {
        ReplayGame->setWindowTitle(QCoreApplication::translate("ReplayGame", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplayGame: public Ui_ReplayGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLAYGAME_H
