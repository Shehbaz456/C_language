#include<stdio.h>

int main()
{
    int i=1,sum=0;
    while (i<=10)
    {   
        sum=sum+i;
        i++;
        
    }
    // for (i = 1; i<=10  ; i++)
    // {
    //     sum=sum+i;
    // }
    printf("sum of 1 to 10 is %d\n", sum);
    return 0;
}