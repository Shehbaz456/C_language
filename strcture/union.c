#include<stdio.h>
struct student
{
    char name[100];
    int Age,ID;

};
union student1
{
    char name1[100];
    int Age1,ID1;

};

int main(){
    struct  student stu[3];
    for (int i = 0; i <3; i++)
    {
    printf("Enter Student[%d] info like name Age ID \n",i);
        scanf("%s%d%d",stu[i].name,&stu[i].Age,&stu[i].ID);
    }
    for (int i = 0; i <3; i++)
    {
        printf(" name = %s\n Age= %d\n ID= %d\n",stu[i].name,stu[i].Age,stu[i].ID);
    }
    union student1 stu1[3];
    for (int i = 0; i <3; i++)
    {
    printf("Enter Student[%d] info like name Age ID \n",i);
        scanf("%s%d%d",stu1[i].name1,&stu1[i].Age1,&stu1[i].ID1);
    }
    for (int i = 0; i <3; i++)
    {
        printf("name = %s\n",stu1[i].name1);
        printf("Age= %d\n",stu1[i].Age1);
        printf("ID= %d\n",stu1[i].ID1);
    }
    return 0;
}