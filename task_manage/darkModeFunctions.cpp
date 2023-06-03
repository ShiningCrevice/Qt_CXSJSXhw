#include <darkModeFunctions.h>

void light_label(QLabel* label) {
    label->setStyleSheet("color: rgb(0, 0, 0); font: 22pt \"华文中宋\";");
}

void light_button(QPushButton* btn) {
    btn->setStyleSheet("background-color: qlineargradient(spread:pad,  x1:0, x2:0, y1:0, y2:1,  "
                       "stop: 0 rgb(209, 255, 202),"
                       "stop: 0.495 rgb(170, 255, 127),"
                       "stop: 0.505 rgb(170, 255, 127), "
                       "stop: 1 rgb(209, 255, 202));"
                       "border: none;"
                       "border-radius: 15px;"
                       "color: rgb(0, 0, 0);");
}

void dark_label(QLabel* label) {
    label->setStyleSheet("color: rgb(196, 230, 255); font: 22pt \"华文中宋\";");
}

void dark_button(QPushButton* btn) {
    btn->setStyleSheet("background-color: rgb(64, 66, 68); color: rgb(196, 230, 255); border-radius: 15px;");
}
