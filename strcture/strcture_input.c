#include<stdio.h>
// #include<string.h>
struct employee{
    int ID;
    float salary;
    char name[33];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter Data for first Employee e1 \n");
    printf("Employee id: ");
    scanf("%d",&e1.ID);
    printf("Enter your salary: ");
    scanf("%f",&e1.salary);
    printf("Enter Employee name: ");
    scanf("%s",e1.name);
printf("\n");
    printf("Enter Data for first Employee e2 \n");
    printf("Employee id: ");
    scanf("%d",&e2.ID);
    printf("Enter your salary: ");
    scanf("%f",&e2.salary);
    printf("Enter Employee name: ");
    scanf("%s",e2.name);

    printf("Enter Data for first Employee e3 \n");
    printf("Employee id: ");
    scanf("%d",&e3.ID);
    printf("Enter your salary: ");
    scanf("%f",&e3.salary);
    printf("Enter Employee name: ");
    scanf("%s",e3.name);

    return 0;
}