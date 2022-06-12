#include<stdio.h>

int main()
{
    //this is not  a proper method to solve this problem
    int i, n=2, prime=1;
    for ( i = 2; i <n; i++)
    {   if (n%i==0)
       {
        prime = 0;
        break;
       }
    }   

    if ( prime==0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number"); 
    }
        
    return 0;
}