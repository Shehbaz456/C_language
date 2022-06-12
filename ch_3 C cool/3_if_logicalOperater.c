#include<stdio.h>

int main()
{
    int age;
    int VIPpass = 0;
    //VIPpass=1;
    printf("Enter your age: \n = ");                       // !  NOT OPERATOR 
    scanf("%d", &age);                                    //  || OR OPERATOR
    if((age<=70 && age>=18) || (VIPpass==1) )            //  && -AND OPERATOR
    {
        printf("You are above 18 and below 70, you can  drive:\n"); 
    }
    else
    {
        printf(" Your age is %d You cannot drive:\n ", age);
    }
    return 0;
}