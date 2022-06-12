// #include <stdio.h>

// int main()
// {
//     float celsius = 37 ,far;
//     far = (celsius * 9 / 5) + 32 ;
//     printf("this is the celsius temprature TO Fahrenheit is %f ", far);
//     return 0;
// }
// hello
// #include<stdio.h>

// int main()
// {    
//     float celsius;
//     printf("Enter the value of celsius = \n ");
//     scanf("%f",&celsius);
//     float  far;
//     far = (celsius * 9 / 5) + 32 ;
//     printf("this is the celsius temprature TO Fahrenheit is %f ", far);
//     return 0;
// }
// hello
#include<stdio.h>

int main()
{    
    float fahrenheit;
    printf("Enter fahrenheit temprature ");
    scanf("%f", &fahrenheit );
    float cel = (fahrenheit - 32)*5/9 ;
    printf("This is convert fahrenheit temprature TO celsius = %f " , cel);
    return 0;
}