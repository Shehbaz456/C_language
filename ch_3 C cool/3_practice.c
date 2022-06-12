/*#include <stdio.h>

int main()
{
    int num, num1;
    printf("Enter your number num\n = ");
    scanf("%d", &num);
    printf("Enter your number num1\n = ");
    scanf("%d", &num1);

    if (num > num1)
    {
        printf("%d num is greater than num1: = %d \n", num, num1);
    }
    else
    {
        printf("%d num is lesser than num1: = %d \n", num, num1);
    }

    return 0;
} 
*/
#include<stdio.h>

int main() //VALUE 97 -122 to a to z
{   char ch;
  printf("Enter a caracter \n");
  scanf("%c",&ch);

  if (ch<=122 && ch>=97 )
  {
    printf("it is lower case");
  }
  else
  {
     printf("it is Not lower case");
  }
  
  
  return 0;
}