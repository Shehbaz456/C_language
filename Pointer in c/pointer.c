//                                                            //   value at(Address)opreator   
// #include<stdio.h>

// int main(){
//     int a=30;
//     int *p,**k;  
//     k=&p ;      //pointer
//     p=&a;

//     printf("%d value\n",a);
//     printf("%u Address\n",&a);           // &--address of (variable)          //pointer--(* --value)
//     // printf("%u Address\n",p);  
//                     //* give value Address doo 
//     printf("value of a= %d\n",*(&a));     //value of a=30
//     printf("value of a= %d\n",*p);     //value of a=30
//     printf("Address of a= %u\n",*(&p));     //address ka address 66751
//     printf("Address of a= %u\n",p);     //adderss  66755
//     printf("\n value is %d",**k);
//     return 0;
// }

   //write a programin c to swap two numbers using call by Value      //P27
// #include<stdio.h>
// int swap(int,int);

// int main(){
//     int a=10,b=20;
//     swap(a,b);
//     return 0;
// }
// int swap(int x,int y){
//      int temp;
//      temp =x;
//      x = y;
//      y = temp;
//      printf("\n x=%d y=%d",x,y);
// }

// //                         //call by reference (like address(&a))
// #include<stdio.h>
// void swap(int* , int*);
// int main(){
//    int a,b;
//    printf("Enter two numbers = ");
//    scanf("%d %d ",&a,&b);
 
//    swap(&a,&b);  
//    printf("%d %d \n ",a,b);               //function calling
//    return 0;
// }
// void swap(int *x , int *y){
//     int temp;
//     temp=*x;                       //value at (x)-10;
//     *x = *y;                       //value at (x)-20;
//     *y=temp;
// }


                                  
//                                  // program 30 write a program in C to find the Area of a circle using call by reference.

// #include<stdio.h>
// void areaperi(int, float* ,float*);
// int main(){
//    int radius;
//    float area ,perimeter;
//    printf("radius of circle = ");
//    scanf("%d",&radius);
//    areaperi(radius,&area,&perimeter);
//    printf("Area =%f \n",area);
//    printf("premeter = %f \n",perimeter);
   
//    return 0;
// }
// void areaperi(int r,float *a,float *p){
//       *a=3.14*(r)*(r);
//       *p=2*3.14*(r);
// }



 //Program 31: Write a program to add, subtract, multiply and divide two numbers using pointers and Using function.
            

// #include<stdio.h>
// int add(int*,int*);
// int Sub(int*,int*);
// int Mult(int*,int*);
// int Divide(int*,int*);
// int main(){
//    int a,b,sum,sub,mul,div;
//    printf("\n Enter your two number =   ");
//    scanf("%d %d",&a,&b);
//    sum=add(&a,&b);
//    sub = Sub(&a,&b);
//    mul=Mult(&a,&b);
//    div = Divide(&a,&b);
//    printf("this is sum = %d\n",sum);
//    printf("this is subtract = %d\n",sub);
//    printf("this is Multiply = %d\n",mul);
//    printf("this is Divide = %d\n",div);
//    return 0;
// }
// int add(int*x,int*y){
//       int sum;
//       sum =(*x)+ (*y);
//       return sum;
// }
// int Sub(int*x,int*y){
//       int sub;
//       sub =(*x)-(*y);
//       return sub;
// }
// int Mult(int*x,int*y){
//       int M;
//       M =(*x)*(*y);
//       return M;
// }
// int Divide(int*x,int*y){
//       int Div;
//       Div =(*x)/(*y);
//       return Div;
// }


// #include<stdio.h>

// int main(){
//    int i=44;
//    int
//    return 0;
// }

