/********************************************************************************
** Form generated from reading UI file 'ddl.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDL_H
#define UI_DDL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DDL
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLabel *label_9;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QDateEdit *dateEdit;

    void setupUi(QWidget *DDL)
    {
        if (DDL->objectName().isEmpty())
            DDL->setObjectName("DDL");
        DDL->resize(926, 530);
        label = new QLabel(DDL);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 351, 71));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 28pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        pushButton_2 = new QPushButton(DDL);
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
        pushButton = new QPushButton(DDL);
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
        label_2 = new QLabel(DDL);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 351, 71));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_3 = new QLabel(DDL);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 180, 351, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_4 = new QLabel(DDL);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 340, 171, 71));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        lineEdit_3 = new QLineEdit(DDL);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(280, 100, 471, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213")});
        font1.setPointSize(14);
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("    dateEdit->setStyleSheet(\"background-color: rgb(255,255,255)\");\n"
"    dateEdit->setFont(font);"));
        label_7 = new QLabel(DDL);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(540, 180, 71, 71));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        label_9 = new QLabel(DDL);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 260, 351, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        spinBox = new QSpinBox(DDL);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(420, 190, 101, 51));
        QFont font2;
        font2.setPointSize(14);
        spinBox->setFont(font2);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox_2 = new QSpinBox(DDL);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(420, 270, 101, 51));
        spinBox_2->setFont(font2);
        spinBox_2->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(DDL);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(380, 350, 200, 51));
        dateEdit->setFont(font2);
        dateEdit->setAlignment(Qt::AlignCenter);

        retranslateUi(DDL);

        QMetaObject::connectSlotsByName(DDL);
    } // setupUi

    void retranslateUi(QWidget *DDL)
    {
        DDL->setWindowTitle(QCoreApplication::translate("DDL", "Form", nullptr));
        label->setText(QCoreApplication::translate("DDL", "\345\242\236\345\212\240ddl", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DDL", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QCoreApplication::translate("DDL", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("DDL", "ddl\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DDL", "ddl\346\211\200\351\234\200\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("DDL", "ddl\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("DDL", "\345\260\217\346\227\266", nullptr));
        label_9->setText(QCoreApplication::translate("DDL", "ddl\351\207\215\350\246\201\347\250\213\345\272\246\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DDL: public Ui_DDL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDL_H
