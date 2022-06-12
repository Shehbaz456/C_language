#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand()%100 + 1 ; //generate a random number b/t 1 and 100
    printf("The number is %d\n",number);
   // Keep runing the loop untill the number guessed

    return 0;
}