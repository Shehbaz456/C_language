// #include<stdio.h>

// int main()
// {
//     int a=4 , d=4.2;
//     float b=4.5;
//     char c='m';
//     printf(" the value of a and b is a = %d \n b = %f \n ", a , b );
//     printf(" the value of a and b is a = %d \n d = %d \n ", a , d );
//     printf(" the value of a and b is a = %d \n b = %c \n ", a , c );
//     printf(" the value of a and b is c = %c \n b = %f \n ", c , b );
//     printf("sum of a and b is = %d \n", a + d);
//     return 0;
// }
// hello operator in C
#include <stdio.h>
int main() 
{
    int x = 4, y = 6;
    printf("the value of 3*x - 8*y  is %d \n", 3 * x - 8 * y);
    printf("the value of 3*x - 8*y  is %d \n", 3 * (x - 8 * y));
    printf("the value of 8*y / 3*x  is %d \n", 8 * y / 3 * x); //prifrince linewise */*
    // 8*3 /3*x = 24/6 will wrong answer                       //becouse of same priroty 
    // 24/3*2
    // 8*2 
    // 16   
    return 0;
}
//fist priroty is   * / %
//second ,, is       + -
//third priroty is    =
