/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete
{
public:
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName("Delete");
        Delete->resize(1052, 588);
        pushButton_2 = new QPushButton(Delete);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 340, 121, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setStrikeOut(false);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));
        comboBox = new QComboBox(Delete);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(160, 210, 501, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font1.setPointSize(16);
        comboBox->setFont(font1);
        pushButton_3 = new QPushButton(Delete);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 340, 121, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));
        label = new QLabel(Delete);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 110, 351, 71));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QWidget *Delete)
    {
        Delete->setWindowTitle(QCoreApplication::translate("Delete", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Delete", "\350\277\224\345\233\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Delete", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("Delete", "\350\257\267\344\275\240\351\200\211\346\213\251\351\234\200\350\246\201\345\210\240\351\231\244\347\232\204\344\272\213\344\273\266\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
