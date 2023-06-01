/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *task)
    {
        if (task->objectName().isEmpty())
            task->setObjectName("task");
        task->resize(800, 600);
        pushButton = new QPushButton(task);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 110, 191, 91));
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
        pushButton_2 = new QPushButton(task);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 250, 191, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));
        pushButton_3 = new QPushButton(task);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 390, 191, 91));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"	background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  \n"
"                                      stop: 0 rgb(209, 255, 202),\n"
"                                      stop: 0.495 rgb(170, 255, 127),\n"
"                                      stop: 0.505 rgb(170, 255, 127), \n"
"                                      stop: 1 rgb(209, 255, 202));\n"
"	border: none;\n"
"	border-radius: 5px;"));

        retranslateUi(task);

        QMetaObject::connectSlotsByName(task);
    } // setupUi

    void retranslateUi(QWidget *task)
    {
        task->setWindowTitle(QCoreApplication::translate("task", "task", nullptr));
        pushButton->setText(QCoreApplication::translate("task", "\345\242\236\345\212\240\344\272\213\344\273\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("task", "\345\210\240\351\231\244\344\272\213\344\273\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("task", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task: public Ui_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
