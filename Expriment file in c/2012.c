                        // find factorial with and without recursion 
// #include<stdio.h>

// int main(){
//     int num,i,fact=1;
//     printf("Enter your number to give factorial of your number ");
//     scanf("%d",&num);
//     for ( i = 1; i <=num; i++)                     //5x4x3x2x1
//     {
//         fact =fact*i;
//     }
//     printf("factorial of given number %d",fact);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int num,i,fact=1;
//     printf("Enter your number to give factorial of your number ");
//     scanf("%d",&num);
 
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i,j,k=1;
//     for ( i = 1; i <5; i++)
//     {
//         for ( j = 1; j <=i ; j++)
//         {
//            printf("%d ",k);
//            k++;
//         }
//     printf("\n");  
//     }
    
//     return 0;
// }
// key word we can create our new datatype by using typedefine 



// #include<stdio.h>
// #include<string.h>          //madam

// int main(){
//     char str1[100],str2[100];
//     printf("Enter your String ");
//     gets(str1);
//     strcpy(str2,str1);
//     strrev(str2);
//     if (strcmp(str1,str2)==0)
//     {
//         printf("it is palindrome string");
//     }
//     else
//         printf("it is not palindrome string");
//     return 0;
// }


//program= 51            // Write a program to make use of arrays with structures in the 
            // following ways:
            // (i) Use array as a structure data member
            // (ii) Create array of structure variables
// #include<stdio.h>
// struct student
// {
//     char name[100];
//     int Age,ID; 
// };
// int main(){
//     struct student stu[3];
//     for (int i = 0; i <3; i++)
//     {
//     printf("Enter ten student[%d]  info like name Age ID \n",i);
//         scanf("%s%d%d",stu[i].name,&stu[i].Age,&stu[i].ID);
//     }
//     for (int i = 0; i <3; i++)
//     {
//         printf("Student[%d] NAME is %s \n",i,stu[i].name);
//         printf("Student[%d] Age is %d \n",i,stu[i].Age);
//         printf("Student[%d] student id is %d \n",i,stu[i].ID);
//     }
//     return 0;
// }
                        //Enter your number to check number is prime or not
// #include<stdio.h>

// int main(){
//     int num;
//     printf("Enter your number to check number is prime or not  \n");
//     scanf("%d",&num);
//     if (num%2==0)
//     {
//         printf("it is not A prime number ");
//     }else{
//         printf("it is  A prime number ");
//     }
    
//     return 0;
// }
 
//                  //program 47 
// #include<stdio.h>
// int Recursion(int);
// int main(){
//     int num,fact;
//     printf("Enter your number ");
//     scanf("%d",&num);
//    fact= Recursion(num);
//     printf("factorial value is %d",fact);
//     return 0;
// }
// int Recursion(int x){
//     int f;
//     if (x==1)
//     {
//         return(1);
//     }
//     else{
//         f = x * Recursion(x-1); // x=4 ,f=4*rec(3) //x=3 f = 3*recursion(2) // x = 2 f=2*recursion(1) 
//     }
//     return f;
// }

// #include<stdio.h>
// int main(){

//   int n1,n2,n3;
//   printf("Enter three number ");
//   scanf("%d%d%d",&n1,&n2,&n3);
//   if(n1+n2>n3)
//   {
//       printf("sum is 1");
//   }
//   else{
//       printf(" sum is 0");
//   }
//    return 0;
// }

// #include<stdio.h>
// int main(){

//   int n1,n2,n3;
//   printf("Enter three number ");
//   scanf("%d%d%d",&n1,&n2,&n3);
//   if(n1+n2>n3)
//   {
//     printf("sum  is 1 ");
  
//   }
//   else{ 
//     printf(" sum is 0");
//     }
// return 0;
// }

// You are given two integers, say M and N.
// You have to output 1, if remainder is 1 when N divides M 
// otherwise output 0

// Input----------------------------
// Two integers, say M and N.

// Output---------------------------------------------------
// You have to output 1 if remainder is 1 when M/N.
// You have to output 0 , otherwise.


// #include<stdio.h>

// int main(){
//     int M,N;
//     scanf("%d%d",&M,&N);
//     if (M%N==1)
//     {
//         printf("1");
//     }else{
//         printf("0");
//     }
    
//     return 0;
// }


// Input : Triplet of three numbers (a,b,c)
// Output : 1 if they are either in strictly increasing (a>b>c) or decreasing (a<b<c) order
//               0, otherwise.

// #include<stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if ((a>b && b>c) || (a<b && b<c))
//     {
//         printf("1");
//     }else{
//         printf("0");
//     }
//     return 0;
// }

// how to printf fibbonachi Series

#include<stdio.h>

int main(){
    
    return 0;
}