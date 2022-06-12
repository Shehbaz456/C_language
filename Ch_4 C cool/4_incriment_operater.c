#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is: %d\n ", i);
    i++;
    // i++; //-->pehle print fir increment       //i=i+1
    //++i; //-->pehle increment fir print kare   //i+1=i
    ++i;
    printf("The value after ++i is: = %d",i );

    i+=10;
    printf("The value after i is: = %d",i );
    
    return 0;
}