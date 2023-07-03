#include <darkModeFunctions.h>

void light_label(QLabel* label) {
    label->setStyleSheet("color: rgb(0, 0, 0); font: 22pt \"华文中宋\"; background: transparent;");
}

void light_button(QPushButton* btn) {
    btn->setStyleSheet("background-image: url(:/res/res/lightBg2.jpg);"
                                  "border-radius: 15px;");
}

void dark_label(QLabel* label) {
    label->setStyleSheet("color: rgb(196, 230, 255); font: 22pt \"华文中宋\"; background: transparent;");
}

void dark_button(QPushButton* btn) {
    btn->setStyleSheet("background-image: url(:/res/res/darkBg2.jpg); color: rgb(196, 230, 255); border-radius: 15px;");
}
