// write a program to create a structure for students containing the following data members :-
// I.	name of the student
// II.	roll number of the student
// III.	marks of the student
// input data of students & display the details of the employee i’d given by the user.

// PROGRAM:-59
// AIM:- Write a program to implement gets() and puts() function in file handling
//  #include<stdio.h>
//  int main()
//  {
//   char name[30];
//   printf("Enter your Name: ");
//   gets(name);
//   printf("your name is : ");
//   puts(name);
//   return 0;
//  }

// Q.3 You are given a non-negative sequence of numbers, ending with a -1. You can
// assume that there are at least two numbers before the ending -1.
// Note : -1 is not a part of input. It only signifies that input has ended.
// Let us call the sequence x0 x1 ... xn -1.
// You have to output the second largest element of the sequence. if there is no second
// largest element in the sequence then output 0.
// Kindly do not use arrays in the code.
// Ans.
#include <stdio.h>
int main()
{
    int a, b, d;
    int c = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        c = b;
    }
    if (b > a)
    {
        c = a;  
        a = b;
        b = c;
    }
    for (;;)
    {
        scanf("%d", &b);
        if (b == -1)
        {
            printf("%d", c);
            break;
        }
        if (b > a)
        {
            c = a;
            a = b;
        }
        if (b > c && b < a)
        {
            c = b;
        }
    }
    return 0;
}
