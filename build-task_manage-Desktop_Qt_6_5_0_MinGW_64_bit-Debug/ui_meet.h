/********************************************************************************
** Form generated from reading UI file 'meet.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEET_H
#define UI_MEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Meet
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;

    void setupUi(QWidget *Meet)
    {
        if (Meet->objectName().isEmpty())
            Meet->setObjectName("Meet");
        Meet->resize(1050, 671);
        pushButton_2 = new QPushButton(Meet);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 470, 121, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setStrikeOut(false);
        pushButton_2->setFont(font);
        pushButton_2->setMouseTracking(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));
        pushButton = new QPushButton(Meet);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 470, 121, 61));
        pushButton->setFont(font);
        pushButton->setMouseTracking(false);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));
        label = new QLabel(Meet);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 351, 71));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 28pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_2 = new QLabel(Meet);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 100, 351, 71));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_3 = new QLabel(Meet);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 190, 351, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_5 = new QLabel(Meet);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 290, 141, 71));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        lineEdit_4 = new QLineEdit(Meet);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(270, 200, 471, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213")});
        font1.setPointSize(14);
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        lineEdit_5 = new QLineEdit(Meet);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(270, 110, 471, 51));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        label_9 = new QLabel(Meet);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(120, 380, 141, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        dateEdit = new QDateEdit(Meet);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(400, 300, 200, 51));
        QFont font2;
        font2.setPointSize(14);
        dateEdit->setFont(font2);
        dateEdit->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Meet);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(500, 370, 31, 71));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        timeEdit = new QTimeEdit(Meet);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(380, 390, 101, 41));
        timeEdit->setFont(font2);
        timeEdit_2 = new QTimeEdit(Meet);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(540, 390, 101, 41));
        timeEdit_2->setFont(font2);

        retranslateUi(Meet);

        QMetaObject::connectSlotsByName(Meet);
    } // setupUi

    void retranslateUi(QWidget *Meet)
    {
        Meet->setWindowTitle(QCoreApplication::translate("Meet", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Meet", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QCoreApplication::translate("Meet", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Meet", "\345\242\236\345\212\240\344\272\213\344\273\266", nullptr));
        label_2->setText(QCoreApplication::translate("Meet", "\344\272\213\344\273\266\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Meet", "\344\272\213\344\273\266\345\234\260\347\202\271\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Meet", "\344\272\213\344\273\266\346\227\266\351\227\264\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Meet", "\350\265\267\346\255\242\346\227\266\351\227\264\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Meet", "~", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Meet: public Ui_Meet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEET_H
