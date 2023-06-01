#ifndef DEADLINE_H
#define DEADLINE_H
#include<QString>


class Deadline
{
public:
    Deadline(int _year, int _month, int _day, int _hour, int _minute, int _ex_hours = 0, int _imp = 0);
    int year, month, day;
    int hour, minute;  //开始的时间和结束的时间
    int ex_hours;  //期望完工所需时间
    int imp;  //importance重要程度
    QString others;  //备注
    bool operator <(Deadline &event);
};

#endif // DEADLINE_H
