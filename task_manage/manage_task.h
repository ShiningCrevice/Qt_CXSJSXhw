#ifndef MANAGE_TASK_H
#define MANAGE_TASK_H
#include <QMessageBox>
#include "event_con.h"

class manage_task {
public :
    manage_task();
    void Add_ddl(ddl_con a);
    void Add_cla(class_con a);
    void Add_meet(meet_con a);
    void Del_ddl(int x);
    void Del_cla(int x);
    void Del_meet(int x);
    vector<ddl_con>ddl;
    vector<class_con>cla;
    vector<meet_con>meet;
};

#endif // MANAGE_TASK_H
