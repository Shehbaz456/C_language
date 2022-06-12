// #include<stdio.h>

// int main()
// {
//     int i=0;
//     while ( i<=20)   
//     {    
//         if ( i>=10)
//         {
//         printf("the value of i is %d\n",i); 
//         }
//         i++;
//     }
     
//     return 0;
// }
#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("Enter the value of n: = ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i+1);
        i++;
    } while (i<n);
    
    return 0;
}