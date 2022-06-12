//          // Q1(e) concatenate two string 
// #include<stdio.h>
// #include <string.h>
// int main(){
//     char str1[]="hello";
//     char str2[]="_Dear";
//     strcat(str1,str2);
//     printf("string1 is %s",str1);
//     return 0;
// }
//      //output is --hello_Dear

//Q1(a) pre-incriment or Post-incriment
// #include <stdio.h>
// int main() {
//    int i = 5;
//    int j = 5;
//    printf("The pre-incremented value : %d\n",i);
//    while(++i < 10 )
//    printf("%d\t",i);
//    printf(" \nThe post-incremented value : %d\n",j);
//    while(j++ < 10 )
//    printf("%d\t",j);
//    return 0;
// }

                                     //Ask ajay sir  Error
// #include<stdio.h>

// int main(){
//     char name[50];
//     char lastname[50];
//     printf("Enter your name ");
//     gets(name);
//     // puts(name);
//     // scanf("%s",name);
//     printf("Enter your lastname ");
//     gets(lastname);
//     // puts(lastname);
//     // scanf("%s",lastname);

//     return 0;
// }

   //Q2(a) while loop and do while loop
                 //while loop 
// #include<stdio.h>
// int main(){
//     int num,i=1;
//     printf("Enter you num we give you multiply table ");
//     scanf("%d",&num);
//     while(i<=10){
//         printf(" %d x %d = %d \n ",i,num,i*num);
//         i++;
//     }
//     return 0;
// }
//                     // do while loop
// #include<stdio.h>
// int main(){
//     int num,i=1;
//     printf("Enter you num we give you multiply table ");
//     scanf("%d",&num);
//     do{
//         printf(" %d x %d = %d \n ",i,num,i*num);
//         i++;
//     }while(i<=10);
//     return 0;
// }

//Q2(b) Write a program to find the largest number among the three number;
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("This is program give you who is largest among three number  \n ");
//     printf("Enter three number  \n ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c){
//         printf("%d is largest num \n ",a);    
//     }
//     if(b>=a && b>=c){
//         printf("%d is largest num \n ",b);    
//     }
//     if(c>=a && c>=b){
//         printf("%d is largest num \n ",c);    
//     }
//     return 0;
// }

//                //  Explain the Srwitch statement, Break statement, and Continue statement ;
// #include<stdio.h>
// int main(){
//     int choice,num ,i;
//     printf("choice 1 for multipication table");
//     printf("choice 2 print number upto 100");
//     printf("Enter you choice ");
//     scanf("%d",&choice);
//     printf("Enter your number you want to print table");
//     scanf("%d",&num);
//     switch (choice)
//     {
//     case 1:
//         for ( i = 1; i <= 10; i++)
//         {
//             printf("%d x %d = %d ",i,num,i*num);
//         }
//         break;
//     case 2:
//         for ( i = num; i <= 100; i++)
//         {
//             printf("%d \n",i);
//             if (num==0)
//             {
//                 continue;
//             }    
//         }
//         break;
    
//     default:
//     printf("defult value entered Erro");
//         break;
//     }
//     return 0;
// }

//(b) Write a program to find the out maximum number in array using pointer.


//Write a program to display the following pattern as the output:-
      // 1
      // 2 3
      // 4 5 6
      // 7 8 9 10

/* 
   a,
*/
// #include<stdio.h>

// int main(){
//    int i,j,k=1;
//    for ( i = 1; i<=4; i++){
//       for ( j = 1; j <=i; j++){
//          printf("%d ",k); 
//          k++;
//       }
//       printf("\n");
//    }
//    return 0;
// }


          //WAp to pattern
          
// #include<stdio.h>

// int main(){
//    int i,j,k=1;
//    for (i = 1; i <5; i++){
//    for ( j = 1; j <=i; j++){
//       printf("%d ",k);
//       k++;
//    }
//    printf("\n");
//    }

//    return 0;
// }

// #include<stdio.h>

// int main(){
//    int i,sum=0;
//    int num[10];
//    printf("Enter 10 number ");
//    for ( i = 0; i <10; i++){
//       printf("\nEnter number = \n");
//       scanf("%d",&num[i]);
//    }
//    for ( i = 0; i <10; i++)
//    sum = sum+num[i];
//    printf("Sum is %d" , sum);
//    return 0;
// }

//write a program to find the factorial of a nurnber using recursion.

// #include<stdio.h>
// int Recursion(int);
// int main(){
//    int num,fact;
//    printf("Enter your number to find factorial");
//    scanf("%d",&num);
//    fact=Recursion(num);
//    printf("factorial value is %d",fact);
//    return 0;
// }
// int Recursion(int n){
//    int f;
//       if (n==1)
//       {
//          return 1;
//       }
//       else{
//          f=n*Recursion(n-1);
//       }
//       return f;
// }



// #include<stdio.h>
// int Recursion(int);
// int main(){
//    int num,Fact;
//    printf("Enter your number to find factorial  ");
//    scanf("%d",&num);
//    Fact=Recursion(num);
//    printf("factorial value is %d",Fact);
//    return 0;
// }
// int Recursion(int x){
//    int f;
//       if (x==1)
//       {
//          return 1;
//       }
//       else{
//          f=x*Recursion(x-1);
//       }
//      return f; 
// }



   //     1
   //    2 3
   //   4 5 6
   // 7 8 9 10
// #include<stdio.h>

// int main(){
//    int rows,i,j,p=1,k;
//    printf("Enter your number of Rows you want to Print patter ");
//    scanf("%d",&rows);
//    for ( i = 1; i <= rows; i++)  //4
//    {
//       for ( k = 1; k < rows-i+5; k++){   printf(" "); }   
//       for ( j = 1; j <=i ; j++){ printf("%d ",p);  p++; }
//       printf("\n");
//    }
   
//    return 0;
// }

      
   //    *
   //   * *
   // *  *  *  
// #include<stdio.h>

// int main(){
//    int rows,i,j,k;
//    printf("Enter your number of Rows you want to Print patter ");
//    scanf("%d",&rows);
//    for ( i = 1; i <= rows; i++)  //4
//    {
//       for ( k = 1; k < rows-i; k++){   printf(" "); }   
//       for ( j = 1; j <=i ; j++){ printf("* ");   }
//       printf("\n");
//    }
   
//    return 0;
// }


// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// #include<stdio.h>
// int main(){
//    int rows,i,j,k;
//    printf("Enter your number of Rows you want to Print patter ");
//    scanf("%d",&rows);
//    for ( i = 1; i <= rows; i++)  //4
//    {
//       // for ( k = 1; k < rows-i+1; k++){   printf(" "); }   
//       for ( j = 1; j <=i ; j++){ printf("%d ",j);  }
//       printf("\n");
//    }
   
//    return 0;
// }