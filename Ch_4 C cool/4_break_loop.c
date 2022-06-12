/*#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("The value of i  is %d\n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    } while (i < 10);

    return 0;
}*/
#include<stdio.h>

int main()
{
    for ( int i = 1; i <20  ; i++)
    {
        printf("this is break statment value is %d\n",i);   
         if ( i==7)
         {
              break;
         }
    }
    
    return 0;
}