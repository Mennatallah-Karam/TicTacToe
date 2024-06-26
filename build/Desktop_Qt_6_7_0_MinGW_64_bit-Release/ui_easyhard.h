/********************************************************************************
** Form generated from reading UI file 'easyhard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYHARD_H
#define UI_EASYHARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_easyhard
{
public:
    QFrame *frame;
    QPushButton *easy_button;
    QPushButton *hadr_button;

    void setupUi(QDialog *easyhard)
    {
        if (easyhard->objectName().isEmpty())
            easyhard->setObjectName("easyhard");
        easyhard->resize(315, 300);
        easyhard->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color:rgb(79, 200, 154);\n"
"font-family:century gothic;\n"
"font-size:24px;\n"
"}\n"
"QFrame\n"
"{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background: rgb(79, 200, 154);\n"
"border-radius:60px;\n"
"}\n"
"QToolButton\n"
"{\n"
"background: rgb(79, 200, 154);\n"
"border-radius:60px;\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"border-radius:15px;\n"
"background:#49edff;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid#717072;\n"
"}"));
        frame = new QFrame(easyhard);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 90, 211, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        easy_button = new QPushButton(frame);
        easy_button->setObjectName("easy_button");
        easy_button->setGeometry(QRect(20, 18, 181, 31));
        hadr_button = new QPushButton(frame);
        hadr_button->setObjectName("hadr_button");
        hadr_button->setGeometry(QRect(20, 58, 181, 31));

        retranslateUi(easyhard);

        QMetaObject::connectSlotsByName(easyhard);
    } // setupUi

    void retranslateUi(QDialog *easyhard)
    {
        easyhard->setWindowTitle(QCoreApplication::translate("easyhard", "Dialog", nullptr));
        easy_button->setText(QCoreApplication::translate("easyhard", "easy", nullptr));
        hadr_button->setText(QCoreApplication::translate("easyhard", "hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class easyhard: public Ui_easyhard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYHARD_H
