// Program to Print table
// #include<stdio.h>

// int main(){
//     int num ,i=1;
//         printf("Enter your num want to print  Table num =  ");
//         scanf("%d",&num);
//         printf("print table \n");
//         while(i<=10)
//         {
//             printf("%d x %d = %d \n",num,i,num*i);
//             i++;
//         }
//     return 0;
// }

// odd or even do with coninational program.

// #include<stdio.h>

// int main(){
//     int num;
//     printf("This is program give your entered num is odd or even \n ");
//     printf("Enter your num = ");
//     scanf("%d", &num);
// if (num%2==0){
//     printf("this is even num ");
// }
// else{
//     printf("this is odd num ");
// }

//     (num%2==0)?printf("your num is even %d",num):printf("your num is odd %d",num);

//     return 0;
// }

// WAP to print number is Prime or not.
// #include<stdio.h>

// int main(){
//     int num, count=0;
//     printf("This is program give your entered num is prime num or not ");
//     printf("Enter your num = ");
//     scanf("%d", &num);
//     for (int i = 2; i < num; i++)
//     {
//         if(num%i==0)
//          count++;
//     }
//     if (count!=0)
//     {
//        printf("not a prime num\n");
//     }else
//     {
//         printf("prime num\n");
//     }

//     return 0;
// }

// program for Result

// #include<stdio.h>

// int main(){
//     int P,C,M,S,U ,CS,avg;
//     printf("Enter you six subject marks = ");
//     scanf("%d %d %d %d %d %d",&P,&C,&M,&S,&U,&CS);
//     avg =(P+C+M+S+U+CS)/6;
//     printf("avg of your marks %d%\n",avg);
//     if (P<35 || C<35 || M<35 || S<35 || U<35 || CS<35 ){
//         printf(" you are fail \n");
//     }
//     else{
//         if (50>avg && avg>=35){ printf("Result : Third Division \n");   }
//         else if (60>avg && avg>=50){  printf("Result : Second Division \n");  }
//         else if (75>avg && avg>=60){    printf("Result : First Division \n");  }
//         else if (100>avg && avg>=75){   printf("Result : Distinction Division \n");   }
//     }
//     return 0;
// }

// //logic building
// #include<stdio.h>

// int main(){
//     int avg=46;
//         if (avg>=35 && avg<50  ){ printf("Result : Third Division \n");   }
//         else
//         {
//             printf("fail");
//         }

//     return 0;
// }

// WAP to print foctorial of given number like 5!=5x4x3x2x1
// #include<stdio.h>

// int main(){
//     int num , i=1,fact=1 ;
//     printf("Enter your num");
//     scanf("%d",&num);
//     while (i<=num)
//     {
//         fact=fact*i;
//         i++;
//     }
//     printf("factorial num %d is %d",num,fact);
//     return 0;
// }

//

// WAP to print foctorial of given number like 5!=5x4x3x2x1

// #include<stdio.h>

// int main(){
//     int num,fact=1;
//     printf("Enter your number we give factorial of given num ");
//     scanf("%d", &num);
//     for (int i = 1; i<=num; i++)
//     {
//         fact=fact*i;
//     }
//     printf("factorial of num=%d is %d",num,fact);
//     return 0;
// }

// Factorial
// #include<stdio.h>

// int main(){
//     int num,fact=1;
//     printf("Enter your num ");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         fact=fact*i;
//     }
//     printf("your num %d and Factorial %d",num,fact);

//     return 0;
// }

// 4x3x2x1

// swapping of values

// #include<stdio.h>

// int main(){
//     int a=2,b=4,temp;
//     printf("this is swapping program " );
//     printf("Enter your two num we give swapping ");
//     scanf("%d  %d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;

//     printf("this is swapping after swapping a=%d     b=%d ",a,b);

//     return 0;
// }

//  average of num $$$

// #include<stdio.h>

// int main(){
//     int Roll_no ,M1,M2,M3,totol,Avg;
//     printf("Enter your Roll_no =  ");
//     scanf("%d",&Roll_no);
//     printf("Enter your three subject Marks = ");
//     scanf("%d %d %d", &M1 , &M2, &M3);
//     totol=M1+M2+M3;
//     Avg = (M1+M2+M3)/3;
//     printf("Total of three subject is = %d",totol);
//     printf("Avg of three subject is = %d",Avg);

//     return 0;
// }

//    check num is positive or negative

//  #include<stdio.h>
//  int main(){
//     int  num;
//     printf("Enter your number we give num is positive ir negative ");
//     scanf("%d" , &num);
//     if (num>0)
//     {
//         printf("this is Positive number");
//     }
//     else if(num<0)
//     {
//         printf("this is Negative number");
//     }else{ printf(" Number is Zero ")}
//     return 0;
//  }

// Program num divisible  by 5

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter your num");
//     scanf("%d",&n);
//     if (num%5==0){
//         printf("Number is divisible by 5");
//     }
//     else{
//         printf("Number is divisible not by 5");
//     }

//     return 0;
// }

// wAP num  multiple of 7
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter your num");
//     scanf("%d",&n);
//     if (n%7==0)
//     {
//         printf("Number is multiple of 7");
//     }
//     else{
//         printf("Number is not multiple of 7");
//     }
//     return 0;
// }

// WAP find even or odd num from 1 to 100;
// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2==0)
//         {
//             printf("even num is  = %d \n",i);
//         }
//         else{
//             printf("odd num is = %d \n",i);
//         }

//     }
//     return 0;
// }

// #include<stdio.h>
// //WAP to accept three numbers from user and Print them in Ascending Order decending order in c language
// int main(){
//     int a,b,c;
//     printf(" we give number According to Ascending order or Decending order");
//     printf("Enter your three num =  ");
//     scanf("%d %d %d",&a,&b,&c);
//     if ((a>b)  && (a>c))
//     {
//         printf("According to Acsending");
//         printf("%d",a);
//         if (b>c)
//         {
//             printf("%d",b);

//         printf("\n Descending Order is %d %d %d",a,b,c);
//         printf("\n Ascending Order is %d %d %d",c,b,a);
//         }
//         else{
//         printf("\n Descending Order is %d %d %d",a,c,b);
//         printf("\n Ascending Order is %d %d %d",b,c,a);

//         }

//     }
//     else if ((b>=a) && (b>=c)){
//         if (a>=c){
//              printf("\n Descending Order is %d %d %d",b,a,c);
//              printf("\n Ascending Order is %d %d %d",c,a,b);
//         }
//         else{
//         printf("\n Descending Order is %d %d %d",c,a,b);
//         printf("\n Ascending Order is %d %d %d",a,c,b);
//         }
//     }
//     else if ((c>=a) && (c>=b)){
//         if (a>=b){
//              printf("\n Descending Order is %d %d %d",c,a,b);
//              printf("\n Ascending Order is %d %d %d",b,a,c);
//         }
//         else{
//         printf("\n Descending Order is %d %d %d",c,b,a);
//         printf("\n Ascending Order is %d %d %d",a,b,c);
//         }
//     }
//     return 0;
// }

//                                 //program to sum of five digite number
// #include<stdio.h>

// int main(){
//     int num,sum=0,nd;
//     printf("Enter five digit num");
//     scanf("%d",&num);
//     nd=num%10;
//     sum=sum+nd;
//     nd=(num/10)%10;
//     sum=sum+nd;
//     nd=(num/100)%10;
//     sum=sum+nd;
//     nd=(num/1000)%10;
//     sum=sum+nd;
//     nd=num/10000;
//     sum=sum+nd;
//     printf(" sum of five digit number = %d",sum);

//     return 0;
// }

//                                             //program of Grade of Marks
// #include<stdio.h>

// int main(){
//     int roll_no,m1,m2,m3 , total , Avg;
//     printf("enter your Roll_no ");
//     scanf("%d",&roll_no);
//     printf("Enter your three subjects marks = ");
//     scanf("%d %d %d",&m1,&m2,&m3);
//     total = m1+m2+m3;
//     Avg = (m1+m2+m3)/3;
//     printf("total marks is = %d",total);
//     printf("Average marks is = %d",Avg);
//     if (Avg>=60)
//     {
//         printf("you get Grade: A ");
//     }else if ((Avg>50) && (Avg<60))
//     {
//         printf("you get Grade: B ");
//     }
//     else if ((Avg>40) && (Avg<50)){
//         printf("you get Grade: C ");
//     }
//     else{
//         printf("Grade F");
//     }
//     return 0;
// }

// prime num or not

// #include<stdio.h>

// int main(){
//     int num=5, i=2;
//     while (i<=num-1)
//     {
//         if (num%i==0)
//         {
//             printf("Not a Prime number ");
//             break;
//         }
//         i++;
//     }
//     if (i==num)
//     {
//         printf(" Prime number ");
//     }
//     return 0;
// }

//                                   // /                /  num Prime or Not

// #include<stdio.h>

// int main(){
//     int num,i=2;
//     printf("Enter your number ");
//     scanf("%d",&num);
//     for (i ; i<=num-1; i++){
//         if (num%i==0){
//             printf("Not a Prime number");
//             break;
//         }
//     }
//     if (num==i){
//         printf("Prime number");
//     }
//     return 0;
// }

//                                     //WAP to input 3-persons Basic salary and find gross salary
// #include<stdio.h>

// int main(){
//     int i,bs,hra,Da ,Gs;
//     for ( i=1 ; i <= 3; i++)
//     {
//         printf("Enter your Basic Salary =  ");
//         scanf("%d",&bs);
//         hra=(bs*90)/100;
//         Da=(bs*10)/100;
//         Gs=bs+hra+Da;
//         printf("\n salary is = %d\n",Gs);

//     }

//     return 0;
// }

//                                             //  // program 17
// #include<stdio.h>

// int main(){
//     int M1,M2,M3,M4,M5,M6 , avg;
//     printf("Enter your six subject Marks");
//     scanf("%d %d %d %d %d %d",&M1,&M2,&M3,&M4 ,&M5, &M6);
//     avg=(M1+M2+M3+M4+M5+M6)/6;
//     if ( M1<35 || M2<35 || M3<35|| M4<35|| M5<35|| M6<35){
//         printf("you are fail");
//     }
//     else{
//         if (avg>=35 && avg<50 ){    printf("Third division");  }
//         else if (avg>=50 && avg<60 ) {   printf("Second Division");  }
//         else if (avg>=60 && avg<75 ){    printf("First division");   }
//         else if (avg>=75 && avg<=100 ){    printf("Distinction");    }
//     }

//     return 0;
// }

//                                    //wap 1222 prime or not;

// #include<stdio.h>
// int main(){
//     int  num,i;
//     printf("Enter your num ");
//     scanf("%d",&num);
//     for ( i = 2; i <=num-1; i++)
//     {
//         if (num%i==0)
//         {
//             printf("not A prime number ");
//             break;
//         }
//     }
//     if (num==i)
//     {
//         printf("this is a prime number ");
//     }
//     return 0;
// }

// Program13:- If an employee basic salary is less than 1500 nri then HRA will be 10% of basic salary and DA 90% nri  of basic salary .if  the basic salary is either equal to or above 1500 nri ,then HRA is 500nri DA will be 98% of basic salary. If the employee enter salary through the keyboard ,write a program to find his gross salary .

// #include<stdio.h>

// int main(){
//     int bs,HRA,DA, gross_salary ;
//     printf("Enter your basic salary =  ");
//     scanf("%d",&bs);
//     if (bs<1500)
//     {
//         HRA=(bs*10)/100;
//         DA=(bs*90)/100;
//     }
//     else if(bs>=1500){
//         HRA=500;
//         DA=(bs*98)/100;

//     }
//     gross_salary= bs + HRA + DA;
//     printf("your Gross Salary is %d ",gross_salary);
//     return 0;
// }

// Program20:- write a program to find the factorial value of any number entered through the keyboard

// #include<stdio.h>

// int main(){
//     int num,fact=1;
//     printf("Enter your number = ");
//     scanf("%d",&num);
//     for (int i = 1; i<=num; i++){
//         fact=fact*i;
//     }
//     printf("factorial of number %d ",fact);
//     return 0;
// }

// Amstrong number 1 to 500;
// #include<stdio.h>

//     int main()
//     {
//         int num, count = 1, rem, sum;
//         while(count <= 500)
//         {
//             num = count;
//             sum = 0;
//             while(num)
//             {
//                 rem = num % 10;
//                 sum = sum + (rem * rem * rem);
//                 num = num / 10;
//             }
//             if(count == sum)
//             {
//                 printf("%d is a Armstrong number\n", count);
//             }
//             count++;
//         }
//          return 0;
// }

// Armstrong num 1 to 500;

// #include<stdio.h>
// int main(){
//     int num ,rem,sum;
//     for (int i = 1; i < 50000 ; i++){
//         num=i;
//         sum=0;
//         while (num){
//             rem = num %10;
//             sum=sum+(rem*rem*rem);
//             num=num/10;
//         }
//         if (i==sum){
//             printf("%d is a Amstrong number \n",i);
//         }
//     }
//     return 0;
// }

// Armstrong num 1 to 500;
// #include<stdio.h>

// int main(){
//     int num ,rem, sum;
//     for (int i = 1; i < 5000 ; i++)
//     {
//         num=i;
//         sum=0;
//         while (num)
//         {
//             rem = num %10;
//             sum=sum+(rem*rem*rem);
//             num=num/10;
//         }
//         if (i==sum)
//         {
//             printf("%d is a Armstrong number \n",i);
//         }
//     }
//     return 0;
// }

// two numbers are entered through keyboard write a program to find value of one raised to the power of another.

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     int a, b, c;

//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);

//     c = pow(a,b);

//     printf("%d raised to the power %d: %d",a,b,c);
// }

// Program for ....
// #include<stdio.h>

// int main(){
//     int price,quantity,dis,total1,total;
//     printf("Enter Quantity of item = ");
//     scanf("%d",&quantity);
//     printf("Enter Quantity of of price = ");
//     scanf("%d",&price);
//     total=quantity*price;
//     if (quantity>1000)
//     {
//         dis=(total*10)/100;
//         total1=total+dis;
//         printf("total price with 10% discount");
//        printf("total expanses is %d",total1);
//     }
//     else if(quantity<1000)
//     {
//     printf("total expanses is %d",total);
//     }
//     return 0;
// }

//                                                 //Armstrong number
// #include<stdio.h>

// int main(){
//     int num,sum,rem;
//     for (int i = 1; i < 15000000; i++)
//     {
//         num=i;
//         sum=0;
//         while (num)
//         {
//             rem=num%10;
//             sum=sum+(rem*rem*rem);
//             num=num/10;
//         }
//         if (i==sum)
//         {
//             printf("Armstrong number %d\n ",i);
//         }
//     }
//     return 0;
// }

//                   // Armstrong num 1 to 500;

// #include<stdio.h>
// int main(){
//     int num ,rem,sum;
//     for (int i = 1; i < 50000 ; i++){
//         num=i;
//         sum=0;
//         while (num){
//             rem = num %10;
//             sum=sum+(rem*rem*rem);
//             num=num/10;
//         }
//         if (i==sum){
//             printf("%d is a Amstrong number \n",i);
//         }
//     }
//     return 0;
// }

// Program26:- write a menu driven program to perform following Operations:
// 1.print Armstrong number upto N
// 2.Display your Prime number i to N
// 3.Reverse of an Integers
// #include<stdio.h>

// int main(){
//     int num,i,choice,reverse=0,rem,sum,max;
//     printf("choice 1 for Armstrong number \n ");
//     printf("choice 2 for check Prime or not \n ");
//     printf("choice 3 for reverse your integer(num) \n ");
//     printf("Enter Your choice \n");
//     scanf("%d",&choice);
//     printf("Enter your num \n");
//     scanf("%d",&num);

//     switch (choice){
//     case 1:
//         for (i = 1; i < 50000 ; i++){
//             num=i;
//             sum=0;
//             while (num){
//                 rem = num %10;
//                 sum=sum+(rem*rem*rem);
//                 num=num/10;
//             }
//             if (!(i==num)){
//                 printf(" Entered number not a Amstrong number ");
//                 break;
//             }
//             else if (i==sum){
//                 printf("Entered  is a Amstrong number \n");
//             }

//         }
//             break;
//      case 2:
//         for (int i = 2; i <num; i++){
//             if (num%i==0){    printf("NOT A Prime number ");  break;  }
//         }
//         if (num==i){    printf("Prime number ");   }
//         break;
//      case 3:
//         printf("reverse of integer ");
//         while (num!=0){
//             rem=num%10;
//             reverse=reverse*10+rem;
//             num/=10;                 //(num=num/10)
//         }
//         printf("Reverse num = %d",reverse);
//         break;
//      default:
//         break;
//     }
//     return 0;
// }

// Pointer of

// #include<stdio.h>

// int main(){
//     int a=55;
//     int *p;
//     p=&a;
//     printf(" %u address of a \n",p);
//     printf("%u address of a \n",&a);
//     printf("%u address of p \n",&p);
//     printf("%u address of a \n",*(&p));

//     printf("\n %u value of a \n ",*p);
//     printf(" %u value of a \n ",a);
//     return 0;
// }

// Program of Swaping

// #include<stdio.h>
// int Swap(int *, int *);
// int main(){
//     int a=4,b=5;
//     printf("value of a and b is 4 , 5 \n");
//     Swap(&a,&b);
//     printf("value of a and b is %d and %d \n",a,b);
//     return 0;
// }
// int Swap(int *x,int *y){
//     int temp,swap;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     // printf("value of a and b is %d and %d \n",x,y);
//     return 0;
// }

// #include<stdio.h>
// int fun(int);
// int main(){
//     int i;
//     printf("Address of i %u \n ",&i);
//     fun(i);
//     return 0;
// }
// int fun(int j){
//     printf("address of i %u ",j);
// }

// #include<stdio.h>
// int mult(int *j){
//     int a;
//     a=10*(*j);
//     // printf("THIS is a %d ",a);
//     return a;
// }
// int main(){
//     int a=5,b;
//     b=mult(&a);
//     printf("this is a %d",b);
//     return 0;
// }

// #include<stdio.h>
// int Sum(int *j, int *k){
//     int sum;
//     sum=(*j)+(*k);
//     return sum;
// }
// int Avg(int *p , int *x){
//     int avg;
//     avg=(*p+*x)/2;
//     return avg;
// }
// int main(){
//     int a,b,s,A;
//     printf("Enter two number ");
//     scanf("%d%d ",&a,&b);
//     s=Sum(&a, &b);
//     A=Avg(&a,&b);
//    printf("Sum of two number %d \n",s);
//    printf("Avg of two number %d \n",A);

//     return 0;
// }

// Program 31: Write a program to add, subtract, multiply and divide two numbers
// using pointers and Using function.
// #include<stdio.h>

// void add_sub_Mult_Div(int x,int y ,int *sum, int *sub,int *mult ,float *div){
//     *sum = x+y;
//     *sub = x-y;
//     *mult = x*y;
//     *div = x/y;
// }
// int main(){
//    int a,b,sum,sub,mult;
//    float div;
//    printf("\n Enter your two number =   ");
//    scanf("%d %d",&a,&b);
//    add_sub_Mult_Div(a,b,&sum,&sub,&mult,&div);
//    printf("this is sum = %d\n",sum);
//    printf("this is subtract = %d\n",sub);
//    printf("this is Multiply = %d\n",mult);
//    printf("this is Divide = %f\n",div);
//    return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,i,choice,reverse=0,rem,sum,max,j=1;
//     char answer;
//     printf("choice 1 for Armstrong number \n ");
//     printf("choice 2 for check Prime or not \n ");
//     printf("choice 3 for reverse your integer(num) \n ");
//     while (j<5 && answer== 'y')
//     {
//         printf("\n Enter Your choice \n");
//         scanf("%d",&choice);
//         printf("\n Enter your num \n");
//         scanf("%d",&num);
//         switch (choice){
//         case 1:
//             for (i = 1; i < 50000 ; i++){
//                 num=i;
//                 sum=0;
//                 while (num){
//                     rem = num %10;
//                     sum=sum+(rem*rem*rem);
//                     num=num/10;
//                 }
//                 if (!(i==num)){
//                     printf(" Entered number not a Amstrong number ");
//                     break;
//                 }
//                 else if (i==sum){
//                     printf("Entered  is a Amstrong number \n");
//                 }

//             }
//                 break;
//         case 2:
//             for (int i = 2; i <num; i++){
//                 if (num%i==0){    printf("NOT A Prime number ");  break;  }
//             }
//             if (num==i){    printf("Prime number ");   }
//             break;
//         case 3:
//             printf("reverse of integer ");
//             while (num!=0){
//                 rem=num%10;

//                 reverse=reverse*10+rem;
//                 num/=10;                 //(num=num/10)
//             }
//             printf("Reverse num = %d",reverse);
//             break;
//         default:{
//             break;
//         }
//     }
//         printf("you want to continue write (yes) = ");
//         scanf("%c",&answer);
//         j++;
//     }

//     return 0;
// }

// Imp. Program 40: Write a program in ‘C’ pointer to sort the elements.

// #include<stdio.h>
// void sort(int , int*);  //function prototype declaration
// void main( )
// {
//    int a[10],n,i;
//   //clrscr( );
//   printf("\n Enter how much elements you want to sort");
//   scanf("%d",&n);  //ampersand //%d –format specifier
//   printf("Enter Elements One-by-One");
//   for(i=0;i<n;i++)
// {
//   scanf("%d",&a[i]);
// }
//   sort(n,a);  //function calling // n,a are actual parameters
//   for(i=0;i<n;i++)
//   printf("\t%d",a[i]);
// }
// void sort(int l, int *p)
// {
//    int i,j,temp;
//    for(i=0;i<l; i++)
//    for(j=0;j<l;j++){
//         if(*(p+j) >= *(p+j+1))  //*(62251+0) >= *(62253)
//             {
//         temp = *(p+j);
//         *(p+j) = *(p+j+1);
//         *(p+j+1) = temp;
//             }
//     }
// }

// Imp. Program 40: Write a program in ‘C’ pointer to sort the elements.
//  #include<stdio.h>
//  int sort(int ,int *);
//  int main(){
//      int arr[10],i,n;
//      printf("Enter how much element you want to short  ");
//      scanf("%d",&n);
//      printf("Enter elements one by one ");
//      for (int i = 0; i < n; i++){
//          scanf("%d",&arr[i]);
//      }
//      sort(n,arr);
//      for(i=0;i<n;i++)
//      printf("\t%d",arr[i]);
//      return 0;
//  }
//  int sort(int l,int *p){
//      int i,j,temp;
//      for ( i = 0; i < l; i++)
//      for ( j = 0; j < l; j++)
//      {
//          if (*(p+j)>=*(p+j+1))
//          {
//              temp=*(p+j);
//              *(p+j)=*(p+j+1);
//              *(p+j+1)=temp;
//          }
//      }
//      return 0;
//  }

// #include<stdio.h>
// int main(){
//     int num,i;
//     printf("program Check given number is Prime or not ");
//     scanf("%d",&num);
//     for ( i = 1; i <= num; i++)
//     {
//         if (i%2==0)
//         {
//             printf("it is not a Prime number ");
//             break;
//         }
//     }
//     if (i==num)
//     {
//         printf("it is Prime number ");
//     }
//     return 0;
// }

// Program20:- write a program to find the factorial value of any number entered through the keyboard.

// #include<stdio.h>

// int main(){
//     int num,i,fact=1;
//     printf("Program give you factorial\n");
//     printf("Enter number ");
//     scanf("%d",&num);
//     for ( i = 1; i <= num; i++)
//     {
//         fact = fact*i;
//     }
//     printf("this is given number %d  factorial %d ",num,fact);

//     return 0;
// }

// Array
// #include<stdio.h>
// int main(){
//     int Marks[5];
//     for(int i=0; i<5;i++){
//        printf("Enter value student Marks %d \n ",i+1);
//         scanf("%d",&Marks[i]);
//     }
//     for(int i=0; i<5;i++){
//        printf("The value of marks for student %d is %d \n",i+1,Marks[i]);
//     }
//     printf(" Ok thankyou ");
//     return 0;
// }

// #include<stdio.h>
// int i=0;
// void val();
// int main(){
//     printf("main's i=%d \n ",i);
//     i++;
//     val();
//     printf("main's i=%d \n ",i);
//     val();
//     return 0;
// }
// void val(){
//     i=100;
//     printf("val's i=%d\n",i );
//     i++;
// }

// Expriment
// #include<stdio.h>
// int x = 10;
// int main(){
//     int x=20;
//     {
//         int x=30;
//         printf("%d \n",x);
//     }
//     printf("%d \n ",x);
//     return 0;
// }
// Expriment
// #include<stdio.h>

// int main(){
//     long int num = 2;
//     printf("%d \n ",num);
//     return 0;
// }
// for Amstrong value or not _____
// #include<stdio.h>

// int main(){
//     int num,sum=0,r,i,temp;
//     printf("Enter your number = ");
//     scanf("%d",&num);
//     temp = num;
//     while (num>0)
//     {
//         r = num%10;
//         sum = sum +(r*r*r);
//         num = num/10;

//     }
//     if (temp==sum)
//     {
//         printf("this is a Armstrong number ");
//     }
//     else{
//         printf("this is Not a Armstrong number ");
//     }

//     return 0;
// }

// Swaping value without using third variable
// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter two number \n");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf(" swap value is  %d %d",a,b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int Sum;
//     int a=5,b=10;
//     Sum=a++ + ++b;
//     printf("a= %d b=%d \n",a,b);
//     printf("Sum is = %d \n",Sum);
//     return 0;
// }

// #include <stdio.h> 
// int main()
// {
//     int number;
//     printf(" \n enter a number:");
//     scanf("%d", &number);
//     printf("cube of number is:%d \n  \n", number * number * number);
//     return 0;
// }



// You are given a non-negative sequence of numbers, ending with a -1. 
//You can assume that there are at least two numbers before the ending -1. 

// Note : -1 is not a part of input. It only signifies that input has ended.
// Let us call the sequence x0  x1 ... xn -1.

// You have to output the second largest element of the sequence. 

//if there is no second largest element in the sequence then output 0.
// Kindly do not use arrays in the code. 







