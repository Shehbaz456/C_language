// #include<stdio.h>

// int main()
// {
//     int n ,i;
//     printf("Enter your number n\n ");
//     scanf("%d",&n);
//     // for ( i=1; i<=n; i++)
//     // {
//     //     printf("Your number is %d\n",i);
//     // }
//     for ( i=n ; i ; i--)
//     {
//         printf("back word numbring: = %d\n", i);
//     }
    
    
//     return 0;
// }
// hello

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
//hello
/*
#include<stdio.h>

int main()           //print number is you want sum:
{
    int n,sum=0,i;
    printf("Enter a number is you want sum:\n = ");
    scanf("%d",&n);
    for (i = 1; i<=n ;i++)
    {
        sum+=i;  
    }
    printf("The value of sum of 1 to n: = %d\n",sum);
    
    return 0;
}*/