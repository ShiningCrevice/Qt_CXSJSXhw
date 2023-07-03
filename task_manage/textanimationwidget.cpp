#include "textanimationwidget.h"

TextAnimationWidget::TextAnimationWidget(QWidget *parent) : QWidget(parent)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TextAnimationWidget::updateText);
    timer->setInterval(150);
}

void TextAnimationWidget::setText(const QString &text)
{
    fullText = text;
    currentText.clear();
    currentIndex = 0;
    timer->start();
}
void TextAnimationWidget::clear() {
    currentText.clear();
}

void TextAnimationWidget::updateText()
{
    if (currentIndex < fullText.length())
    {
        currentText += fullText.at(currentIndex);
        ++currentIndex;
        update();
    }
    else
    {
        timer->stop();
    }
}

void TextAnimationWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.drawText(rect(), Qt::AlignCenter, currentText);
}
