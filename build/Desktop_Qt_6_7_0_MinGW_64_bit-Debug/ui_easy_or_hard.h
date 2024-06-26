/********************************************************************************
** Form generated from reading UI file 'easy_or_hard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASY_OR_HARD_H
#define UI_EASY_OR_HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *easy_button;
    QPushButton *hard_button;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        easy_button = new QPushButton(Dialog);
        easy_button->setObjectName("easy_button");
        easy_button->setGeometry(QRect(140, 70, 93, 29));
        hard_button = new QPushButton(Dialog);
        hard_button->setObjectName("hard_button");
        hard_button->setGeometry(QRect(140, 140, 93, 29));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        easy_button->setText(QCoreApplication::translate("Dialog", "easy", nullptr));
        hard_button->setText(QCoreApplication::translate("Dialog", "hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASY_OR_HARD_H
