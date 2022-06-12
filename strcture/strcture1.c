//stracture is dissimilar Elements(data)
//stracture is a hetrogenious data type elements
// so a stracture in C is a collection of varibales of 
//different types under a single name
 // time 11:48:24 stamp  13 feb 2022.
#include<stdio.h>
#include<string.h>

struct employee{
    int code ;
    float salary;
    char name[33];
};
int main(){
    
struct  employee e1;

    e1.code =110;
    e1.salary =332.2;
    // e1.name ="Harry";  --- // 😂🤣 don't work becouse of = we can't use
    strcpy(e1.name,"Harry");
    printf("this is your code is %d \n",e1.code);
    printf("this is your salary is %.2f \n",e1.salary);
    printf("this is your code is %s \n",e1.name);
    
    return 0;
}

