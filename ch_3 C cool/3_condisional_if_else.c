#include<stdio.h>

int main()
{
    int a;
    printf("Enter your a\n");
    scanf("%d", &a);
   //one line of code
    (a<5)? printf("A is less than 5") : printf("A is grater than 5");
    return 0;
}