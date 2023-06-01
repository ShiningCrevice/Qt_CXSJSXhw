/********************************************************************************
** Form generated from reading UI file 'class.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_H
#define UI_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QLabel *label_7;

    void setupUi(QWidget *Class)
    {
        if (Class->objectName().isEmpty())
            Class->setObjectName("Class");
        Class->resize(1028, 668);
        pushButton = new QPushButton(Class);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 470, 121, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setStrikeOut(false);
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
        pushButton_2 = new QPushButton(Class);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 470, 121, 61));
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
        label = new QLabel(Class);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 351, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 28pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_2 = new QLabel(Class);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 100, 351, 71));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_3 = new QLabel(Class);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 170, 351, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_4 = new QLabel(Class);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 240, 351, 71));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_5 = new QLabel(Class);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 310, 151, 71));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_6 = new QLabel(Class);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 380, 351, 71));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        comboBox = new QComboBox(Class);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(390, 400, 201, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font2.setPointSize(16);
        comboBox->setFont(font2);
        comboBox_2 = new QComboBox(Class);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(290, 330, 101, 41));
        comboBox_2->setFont(font2);
        lineEdit_3 = new QLineEdit(Class);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 110, 471, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213")});
        font3.setPointSize(14);
        lineEdit_3->setFont(font3);
        lineEdit_3->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        lineEdit_4 = new QLineEdit(Class);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(270, 180, 471, 51));
        lineEdit_4->setFont(font3);
        lineEdit_4->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        lineEdit_5 = new QLineEdit(Class);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(270, 250, 471, 51));
        lineEdit_5->setFont(font3);
        lineEdit_5->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        timeEdit = new QTimeEdit(Class);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(460, 330, 101, 41));
        QFont font4;
        font4.setPointSize(14);
        timeEdit->setFont(font4);
        timeEdit_2 = new QTimeEdit(Class);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(620, 330, 101, 41));
        timeEdit_2->setFont(font4);
        label_7 = new QLabel(Class);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(580, 310, 31, 71));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));

        retranslateUi(Class);

        QMetaObject::connectSlotsByName(Class);
    } // setupUi

    void retranslateUi(QWidget *Class)
    {
        Class->setWindowTitle(QCoreApplication::translate("Class", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Class", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Class", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("Class", "\345\242\236\345\212\240\350\257\276\347\250\213", nullptr));
        label_2->setText(QCoreApplication::translate("Class", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Class", "\350\257\276\347\250\213\346\225\231\345\256\244\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Class", "\350\257\276\347\250\213\350\200\201\345\270\210\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Class", "\350\257\276\347\250\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Class", "\350\257\276\347\250\213\345\221\250\346\225\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Class", "~", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Class: public Ui_Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_H
