// #include<stdio.h>

// int main()  //the program is natural number
// {
//     int i=0;
//     do
//     {
//         printf("The value of i is %d\n", i );
//         i++;
//     } while (i<10);
    
//     return 0;
// }
//hello
#include<stdio.h>

int main()      //write a counting
{
    int n,i=1;
    printf("Enter Your number you want to print till n:  \n = ");
    scanf("%d",&n);
    do
    {
        printf("Your number is %d\n",i);
        i++;
    } while (i<=n );
    
    return 0;
}


