#include "ourevent.h"

OurEvent::OurEvent(int _year, int _month, int _day, int _shour, int _sminute, int _ehour, int _eminute, QString _address)
    : year(_year), month(_month), day(_day), shour(_shour), sminute(_sminute), ehour(_ehour), eminute(_eminute), address(_address)
{

}

bool OurEvent::operator<(OurEvent &event) {
    if (year != event.year)
        return year < event.year;
    if (month != event.month)
        return month < event.month;
    if (day != event.day)
        return day < event.day;
    if(shour != event.shour)
        return shour < event.shour;
    return sminute < event.sminute;
}
