#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if ( num==1)
    {
        printf("Your Enterd number is 1\n");
    }
    else if ( num==2)
    {
        printf("Your Enterd number is 2\n");
    }
    else if ( num==3)
    {
        printf("Your Enterd number is 3\n");
    }
    else
    {
        printf("You are not enter its 1,2 and 3 \n ");
    }
    
    
    return 0;
}