#include<stdio.h>

int main()
{
    int Physics , Chemistry , Maths;
    float total;
    printf("Enter Physics Marks\n = ");
    scanf("%d", &Physics);

    printf("Enter Chemistry Marks\n = ");
    scanf("%d", &Chemistry);
    
    printf("Enter Maths Marks\n = ");
    scanf("%d", &Maths);
    
    total = ( Physics+Maths+Chemistry )/3;
    if ((total<40) || Physics<33 ||Chemistry<33 || Maths<33)
    {
      printf("Your total percentage is %f and You are Fail\n" , total) ;  
    }
    else
    {
      printf("Your total percentage is %f and You are Pass\n" , total) ;     
    }  
    return 0;
}