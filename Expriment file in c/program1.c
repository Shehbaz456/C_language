

// #include<stdio.h>

// int main(){
//     float a,b,add,multi,sub,divi;
//     printf("Enter first number = ");
//     scanf("%f",&a);
//     printf("Enter second number = ");
//     scanf("%f",&b);
//     add = a + b;
//     sub = a - b;
//     multi = a * b;
//     divi = a / b;
//     printf("add= %0.1f\n",add); 
//     printf("sub = %0.1f \n",sub);
//     printf("multi = %0.1f \n",multi);
//     printf("divide = %0.1f \n",divi);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     float km,m,cm,ft,inch; 
//     printf("Enter the distance beteen to city(km)");
//     scanf("%f",&km);
    
//     m=km*1000;
//     cm=m*100;
//     inch=cm/2.54;
//     ft=inch/12;
//     printf("Distance in meter = %f\n",m);
//     printf("Distance in centimeter = %f\n",cm);
//     printf("Distance ininch  = %f\n",inch);
//     printf("Distance in ft = %f\n",ft);
//     return 0;
// }


                        //Problem 1.3


// #include<stdio.h>

// int main(){
//     int m1,m2,m3,m4,m5,Aggr;
//     float per;
//     printf("Enter your Marks obtained in College \n");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
//                                                     //Aggregate mean is sum of all value
//     Aggr=m1+m2+m3+m4+m5;
//     per=Aggr/5;
//     printf("Aggregate Marks is %d",Aggr);
//     printf("Percentage is %d",Aggr);
//     return 0;
// }


//                                 //Find Area of Triangle 
// #include<stdio.h>
// #include <math.h>
// int main(){
//     float a,b,c,sp,area;
//     printf("Enter Sides of a Triangle");
//     scanf("%f %f %f",&a,&b,&c);
//     sp=(a+b+c)/2;
//     area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    
//     printf("area of triangle is %f ",area);
    
    
//     return 0;
// }



//         // Problem 2.3
//         // Consider a currency system in which there are notes of seven denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs.
//         // N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
//         // Program

// #include<stdio.h>
// int main()
// {
// int amount, hun, fifty, ten, five, two, one, total;
// printf ("Enter the amount:");
// scanf ("%d", &amount);
// hun = amount / 100;
// amount = amount % 100;
// fifty = amount / 50;
// amount = amount % 50;
// ten = amount / 10;
// amount = amount % 10;
// five = amount / 5;
// amount = amount % 5;
// two = amount / 2;
// amount = amount % 2;
// one = amount / 1;
// amount = amount % 1;
// total = hun + fifty + ten + five + two + one;
// printf ("Smallest number of notes = %d\n", total);
// return 0;
// }




//         // Problem 3.1
//         // If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred
//         // loss. Also determine how much profit he made or loss he incurred.

// #include<stdio.h>

// int main(){
//     int cp,sp,Profit,loss;
//     printf("Enter Cost of item =  ");
//     scanf("%d",&cp);
//     printf("\nEnter sell Price of item =  ");
//     scanf("%d",&sp);

//     if (sp>cp)
//     {
//          Profit=sp-cp;
//          printf("\n Geting profit is %d",Profit);
        
//     }
//     else if (cp>sp)
//     {
//          loss = cp-sp;   
//          printf("\n Geting loss of %d" , loss);
        
//     }
//     else if (sp==cp)
//     {
//         printf("\n  NO Loss and nothig Profit   ");
//     }
    
    

//     return 0;
// }




        // Problem 3.3
        // Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.

// #include<stdio.h>

// int main(){
//         int yr;

//         return 0;
// }

                                  // Practical 24
// #include<stdio.h>

// int main(){
//         int num,choice,fact=1,i,count=0;
//         printf("choice 1 for factorial \n ");
//         printf("choice 2 for num prime or not \n");
//         printf("choice 3 for even or not\n");
//         printf("choice 4 for Exit \n");
//         printf("Enter your choice (1, 2 , 3 , 4 )=  ");
//         scanf("%d",&choice);
//         printf("enter your num  ");
//         scanf("%d",&num);
//         switch (choice)
//         {
//         case 1:
//                 for ( i = 1; i<=num; i++){
//                         fact=fact*i;
//                 }
//                 printf("factorial of num=%d is %d",num,fact);
//                 break;
//         case 2:
//                 for ( i = 2; i<=num-1; i++){
//                         if (num%i==0){     printf("NOT a prime num");
//                                 break;   
//                         }
//                 }
//                 if(num==i){      printf("it is prime number");     }
//                 break;
//         case 3:
//                 if(num%2==0)
//                 {
//                         printf("it is even number");
//                 }else{
//                         printf("it is odd number");
//                 }
//                 break;
//         case 4:
//                 break;
//         }
//         return 0;
// }



// write a menu driven program to perform following Operations.
//1.print Armstrong number upto N
//2.Display your Prime number i to N
//3.Reverse of an Integers


