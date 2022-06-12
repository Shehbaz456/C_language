// #include<stdio.h>
// int Add(int,int);
// int Mult(int* ,int*);
// int main(){
//     int a,b,add,mul;
//     printf("Enter two number ");
//     scanf("%d %d",&a,&b);
//     add =Add(a,b); 
//    mul= Mult(&a,&b);
//    printf("Add two number %d \n",add);
//    printf(" Multiply two number  %d \n ",mul);
//     return 0;
// }
// int Add(int x,int y){
//     int a;
//     a=x+y;
//     return a;
// }
// int Mult(int *x,int *y){
//     int mul;
//     mul = (*x)*(*y);
//     return mul;
// }

                              //Q2(1)
// #include<stdio.h>
// int Mult(int x ,int y,int *mul,int *Add){
//     *Add =x+y;
//     *mul =x*y;
//     return *mul;
// }
// int main(){
//     int a,b,Add,mul;
//     printf("Enter two number ");
//     scanf("%d %d",&a,&b);
//    Mult(a,b,&mul ,&Add);
//    printf("Add two number %d \n",Add);
//    printf(" Multiply two number  %d \n ",mul);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     char str1[100];
//     printf("Enter your first string ");
//     gets(str);
//     printf("Enter your second string ");
//     gets(str1);
//     int val;
//     val = strcmp(str,str1);
//     if (val==0){
//     printf("String is identical \n");
//     }
//     else{
//     printf("String are Not identical \n"); 
//     }
//     return 0;
// }

                        //  // unit 2(5)
// #include<stdio.h>
// int Recursion(int);
// int main(){
//     int num,Fact;
//     printf("We give you factorial of a given number \n ");
//     printf("Enter your number ");
//     scanf("%d",&num);
//     Fact= Recursion(num);
//     printf("Factorial of %d is %d",num,Fact);
//     return 0;
// }
// int Recursion(int x){
//     int fact;
//     if (x==1){
//         return 1;
//     }
//     else{
//         fact = x * Recursion(x-1);
//         return fact;
//     }
// }

