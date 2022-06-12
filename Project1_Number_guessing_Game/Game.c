#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number ,guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1 ; //generate a random number b/t 1 and 100
    //printf("The number is %d\n",number);
    // Keep runing the loop untill the number guessed
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("lower number please\n");
        }
        else if (guess<number)
        {
            printf("Higher number please\n"); 
        }
        else
        {    printf("you guessed it in %d attempts\n",nguesses);
             printf("You win,you guess right number\n");
        }
        nguesses++;
        
    } while (guess!=number);
    
    return 0;
}