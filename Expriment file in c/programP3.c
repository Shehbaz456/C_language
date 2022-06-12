#include<stdio.h>

int main(){
    int salary ,house_rent,dra,gross_salary;
    printf("Enter your salary = ");
    scanf("%d",&salary);
    house_rent = (salary*20)/100;
    dra= (salary*40)/100;
    gross_salary = house_rent + dra + salary;
    printf("This is net salary %d ",gross_salary);
    return 0;
}
