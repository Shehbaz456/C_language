// #include<stdio.h>
// int factorial(int);
// int main(){
//     int a,fact;
//     printf("Enter your number ");
//     scanf("%d",&a);
//     fact = factorial(a);
//     printf("factorial value is %d",fact);
//     return 0;
// }
// int factorial(int x){
//     int fact=1,i;
//     for ( i = x; i >=1; i--)
//     {
//         fact = fact *i;
//     }
//     // int fact=1,i;
//     // for ( i = 1; i <=x; i++)
//     // {
//     //     fact = fact *i;
//     // }
//     return fact;
// }
// #include<stdio.h>
// int factorial(int);
// void main(){
//     int a,fact;
//     printf("Enter your number ");
//     scanf("%d",&a);
//     fact = factorial(a);
//     printf("factorial value is %d",fact);
// }
// int factorial(int x){
//     int fact=1,i;
//     for ( i = x; i >=1; i--){
//         fact = fact *i;
//     }
//     // int fact=1,i;
//     // for ( i = 1; i <=x; i++)
//     // {
//     //     fact = fact *i;
//     // }
//     return fact;
// }

//  //program 47 
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
// #include<string.h>

// int main(){
//     char hex[100],i;
//     printf(" \n This program convert hexdecimal to Binary \n");
//     printf("Enter your hexadecimal number ");
//     gets(hex);
//     printf("\n Equivlent Binary value ");

//     for(i=0; hex[i]!='\0'; i++)
//     switch(hex[i]){
//     case '0':
//         printf("0000");
//         break;
//     case '1':
//         printf("0001");
//         break;
//     case '2':
//         printf("0010");
//         break;
//     case '3':
//         printf("0011");
//         break;
//     case '4':
//         printf("0100");
//         break;
//     case '5':
//         printf("0101");
//         break;
//     case '6':
//         printf("0110");
//         break;
//     case '7':
//         printf("0111");
//         break;
//     case '8':
//         printf("1000");
//         break;
//     case '9':
//         printf("1001");
//         break;
//     case 'A':
//     case 'a':
//         printf("1010");
//         break;
//     case 'B':
//     case 'b':
//         printf("1011");
//         break;
//     case 'C':
//     case 'c':
//         printf("1100");
//         break;
//     case 'D':
//     case 'd':
//         printf("1101");
//         break;
//     case 'E':
//     case 'e':
//         printf("1110");
//         break;
//     case 'F':
//     case 'f':
//         printf("1111");
//         break;
//     default:
//     printf(" \n Entered invalid hexadecimal number ");
//         break;
//     }
//     return 0;
// }