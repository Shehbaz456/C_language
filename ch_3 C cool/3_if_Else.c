#include<stdio.h>

int main()
{
    int age , Run;
    printf("Enter your age: \n = ");
    scanf("%d", &age);
    if(age>=90)
    {
        printf("You are above 90, you cannot drive:\n"); 
    }
    else
    {
        printf(" Your age is %d You can drive:\n ", age);
    }
    // hello cool
       printf("Enter your Run\n = ");
       scanf("%d", &Run);
    if (Run==50)
    {
       printf("Your Run is = %d is half century \n ",Run, Run==50);
    }
    else
    {
        printf(" well Play my boy");
    }
    
    return 0;
} 