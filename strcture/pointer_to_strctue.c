#include<stdio.h>
#include<string.h>

struct employee{
    int ID;
    float salary;
    char name[33];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr =&e1;
    (*ptr).ID = 101;
    printf("%d",e1.ID);

    return 0;
}