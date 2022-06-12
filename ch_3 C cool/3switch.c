#include<stdio.h>

int main() //3:24 time
{
    int Rating;
    printf("Enter your Rating\n");
    scanf("%d", &Rating);
    
     switch (Rating)
     {
     case 1:  
         printf("Your Rating is 1\n");
         break;
     case 2:  
         printf("Your Rating is 2\n");
         break;
     case 3:  
         printf("Your Rating is 3\n");
         break;
     case 4:  
         printf("Your Rating is 4\n");
         break;
     case 5:  
         printf("Your Rating is 5\n");
         break;    
        
     default:
         printf( " Invalide Rating ");
         break;
     }

    return 0;
}