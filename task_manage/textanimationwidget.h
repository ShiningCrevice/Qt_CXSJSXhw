#ifndef TEXTANIMATIONWIDGET_H
#define TEXTANIMATIONWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPainter>

class TextAnimationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TextAnimationWidget(QWidget *parent = nullptr);

    void setText(const QString& text);
    void paintEvent(QPaintEvent *event);
    void clear();

private slots:
    void updateText();

private:
    QTimer *timer;
    QString fullText;
    QString currentText;
    int currentIndex;
};

#endif
