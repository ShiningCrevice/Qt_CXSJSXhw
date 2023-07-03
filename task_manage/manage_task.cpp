#include "manage_task.h"
manage_task::manage_task()
{

}

void manage_task::Add_ddl(ddl_con a){
    ddl.push_back(a);
}
void manage_task::Add_cla(class_con a){
    cla.push_back(a);
}
void manage_task::Add_meet(meet_con a){
    meet.push_back(a);
}
void manage_task::Del_ddl(int x) {
    ddl.erase(ddl.begin() + x);
}
void manage_task::Del_cla(int x) {
    cla.erase(cla.begin() + x);
}
void manage_task::Del_meet(int x) {
    meet.erase(meet.begin() + x);
}
