#ifndef OUREVENT_H
#define OUREVENT_H
#include<QString>


class OurEvent
{
public:
    OurEvent(int _year, int _month, int _day, int _shour, int _sminute, int _ehour, int _eminute, QString _address);
    int year, month, day;
    int shour, sminute, ehour, eminute;  //开始的时间和结束的时间
    QString address;
    QString teacher;   //此项以及后一项选填
    QString others;
    bool operator <(OurEvent &event);
};

#endif // OUREVENT_H
