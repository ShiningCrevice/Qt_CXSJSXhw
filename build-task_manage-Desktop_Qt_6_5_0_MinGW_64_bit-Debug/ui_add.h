/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName("Add");
        Add->resize(953, 549);
        pushButton = new QPushButton(Add);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 320, 121, 61));
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
        comboBox = new QComboBox(Add);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(450, 150, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font1.setPointSize(16);
        comboBox->setFont(font1);
        label = new QLabel(Add);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 140, 241, 61));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        pushButton_2 = new QPushButton(Add);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 320, 121, 61));
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

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QCoreApplication::translate("Add", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Add", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Add", "\345\242\236\345\212\240\344\272\213\344\273\266\347\232\204\347\261\273\345\236\213\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
