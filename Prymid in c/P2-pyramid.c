// #include<stdio.h>

// int main(){
//     int rows,number=1;
//     printf("Enter num of rows = ");
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=rows-i ; j++) {    printf(" ");    }
//         for (int c = 1; c <= (1*i-1); c++){   printf(" %d ",number);    ++number;   }
//         printf(" \n ");    
//     }
//     return 0;
// }

// #include<stdio.h>
//                       // primed of inverted P36
// int main(){
//     int i,j,rows,number=1;
//     printf("Enter the number of rows " );
//     scanf("%d",&rows);
//     for ( i = rows; i >=1; i--)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
                          // for Praimed p-35
// int main(){
//     int i,j,rows;
//     printf("Enter the number of rows " );
//     scanf("%d",&rows);
//     for ( i = 1; i <=rows; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include<stdio.h>

// int main(){
//     int rows,number=1;
//     printf("Enter num of rows = ");
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=i ; ++j)
//         {
//             printf("%d ",number);
//             ++number;
//         }
//         printf(" \n ");    
//     }
    
//     return 0;
// }






// #include<stdio.h>

// int main(){
//     int rows,number=1;
//     printf("Enter num of rows = ");
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=i ; ++j)
//         {
//             printf("%d ",number);
//             ++number;
//         }
//         printf(" \n ");    
//     }
    
//     return 0;
// }


// Program: Write a program in C to print the following pattern.
// *
// **
// ***
// ****
// *****
// #include<stdio.h>
// int main(){
//     int i,j,num;
//     printf("Enter your number you want how many rows ");
//     scanf("%d",&num);
//     for ( i = 0; i <num ; i++)
//     {
//         for ( j = 0; j <=i; j++){    printf("*");    }
//         printf("\n");
//     }
//     return 0;
// }


// Program 36:-Write a program in C to print the Inverted half  pyramid of *
// *****
// ****
// **
// *

// #include<stdio.h>
// int main(){
//     int i,j,rows;
//     printf("Enter your number you want how many rows ");
//     scanf("%d",&rows);
//     for ( i =rows; i >=1 ; i--)
//     {
//         for ( j = 1; j <=i; j++){    printf("*");    }
//         printf("\n");
//     }
//     return 0;
// }

//    Program: Write a program in C to print the Half Pyramid of   Numbers.
//    1
//    1 2
//    1 2  3
//    1 2  3  4

// #include<stdio.h>
// int main(){
//     int i,j,rows;
//     printf("Enter your number you want how many rows ");
//     scanf("%d",&rows);
//     for ( i =1; i <=rows ; i++)
//     {
//         for ( j = 1; j <=i; j++){    printf("%d",j);    }
//         printf("\n");
//     }
//     return 0;
// }


       // prymed 


#include<stdio.h>
int main(){
    int rows,number=1;
    printf("Enter your Rows you want to print pyramid  ");
    scanf("%d",&rows);
    for (int i = 0 ; i <=rows; i++)
    {
        for (int k = 0; k<=rows-i; k++){    printf(" ");    }
        for (int j = 0; j <=(1*i-1); j++){    printf(" %d ",number);  ++number;    }
        printf(" \n ");
    }
    return 0;
}
