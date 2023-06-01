#ifndef EVENT_CON_H
#define EVENT_CON_H

#include <QString>
#include <vector>
using namespace std;

class abstract_con
{
public:
    abstract_con();
    QString name, classroom;
    int start_hour, end_hour, start_min, end_min;
};

class ddl_con
{
public:
    ddl_con();
    QString name;
    int year, month, day;
    int imp, ex_hour;
};
class meet_con : public abstract_con
{
public:
    meet_con();
    //QString name, classroom;
    int year, month, day;
    //int start_hour, end_hour, start_min, end_min;
};
class class_con : public abstract_con
{
public:
    class_con();
    QString teacher;
    //QString name, teacher, classroom;
    //int day, start_hour, end_hour, start_min, end_min;
    int day;
    int week_type; // type = 0 每周，type = 1 单周，type = 2 双周
};

#endif // EVENT_CON_H
