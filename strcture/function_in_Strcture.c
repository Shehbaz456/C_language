#include<stdio.h>
#include<string.h>

struct employee{
    int ID;
    char name[33];
    float salary;
};
void show(struct employee emp){
    printf("the Id of employee is: %d\n",emp.ID);
    printf("the name of employee is: %s\n",emp.name);
    printf("the salary of employee is: %.2f\n",emp.salary);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr =&e1;
    // (*ptr).ID = 101;
    ptr->ID = 101;
    ptr->salary=324000;
    strcpy(ptr->name,"harry");
    show(e1);
    return 0;
}