#include<stdio.h>

int main()
{   
    int n;
    printf("Enter your number you want print multiplication Table:\n = ");
    scanf("%d",&n);
    for ( int i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d\n",n,i,n*i);
    }
    return 0;
}