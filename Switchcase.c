//   //WAP to check the given num is Prime num or not.
// #include<stdio.h>

// int main(){
//     int num=18,i=2;
//     for( i ; i<=num-1; i++)
//     {
//         if(num%i==0){
//             printf("\n NOT a prime number \n ");
//             break;
//         }    
//     }
//     if(num==i){
//         printf(" \n Pime number : \n ");
//     }
//     return 0;
// } 


// #include<stdio.h>

// int main(){
//     int week;
//     printf("Enter week day num");
//     scanf("%d",&week);
//     switch (week)
//     {
//     case 1:
//         printf("MOnday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("wednesday");
//         break;
//     case 4:
//         printf("thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("satarday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
    
//     default:
//          printf("wrong num input");
//         break;
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int score;
//     printf("Enter Score(0-100): ");
//     scanf("%d",&score);

//     switch ( score / 10)
//     {
//     case 10:
//     case 9:
//         printf("Grade : A");
//         break;
//     case 8:
//         printf("Grade : B");
//         break;
//     case 7:
//         printf("Grade : C");
//         break;
//     case 6:
//         printf("Grade : D");
//         break;
//     case 5:
//         printf("Grade : E");
//         break; 
//     default:
//         printf("Grade : F ");
//         break;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     char op;
//     int num1,num2;
//     printf("Choose Your operator = (+ - * /  A P):   ");
//     scanf("%c",&op);
//     printf("Enter your Two number  =    ");
//     scanf("%d%d",&num1,&num2);
    
//     switch (op){
//         case '+':
//             printf("Addition is %d ",num1+num2);
//             break;
        
//         case '-':
//             printf("Subtraction is %d ",num1-num2);
//             break;
        
//         case '*':
//             printf("Multiply is %d ",num1*num2);
//             break;
        
//         case '/':
//             printf("Divide is %d ",num1/num2);
//             break;
//         case 'A':
//             printf("Average is %d ",(num1+num2)/2);
//             break;
//         case 'P':
//             printf("Percentage is %d ",(num1+num2)/2);
//             break;
//         default:
//             printf("Error operator is Not Correct \n");
//             break;
//         }

//     return 0;
// }


#include<stdio.h>

int main(){
    int num,i,choice,reverse=0,rem,max;
    printf("choice 1 for Armstrong number \n");
    printf("choice 2 for check Prime or not \n");
    printf("choice 3 for reverse your integer(num) \n");
    printf("Enter your num \n ");
    scanf("%d",&num);
    printf("Enter Your choice \n ");
    scanf("%d",&choice);
    
    switch (choice){
    case 1: 
       printf("help in case 1 ");
       printf("choice 1 for Armstrong number upto N");
          break;
    case 2:
        for (int i = 2; i <num; i++){
            if (num%i==0){    printf("NOT A Prime number");  break;  }    
        }
        if (num==i){    printf("Prime number ");   }
        break;
    case 3:
        printf("reverse of integer");
        while (num!=0)
        {
            rem=num%10;
            reverse=reverse*10+rem;
            num/=10;                 //(num=num/10)
        }
        printf("Reverse num = %d",reverse); 
        break;
    default:
        break;
    }
    return 0;
}


// #include<stdio.h>

// int main(){
//     int num,count=1,rem,sum;
//     while (count<=500)
//     {    
//         num=count;
//         sum=0;
//         while (num)
//         {
//             rem=num % 10;
//             sum = sum+(rem*rem*rem);
//             num =num/10;
//         }
//         if(count==sum){
//             printf( "%d is a armstrong number\n",count);
//         }
//         count++;
//     }
//     return 0;
// }




// #include<stdio.h>  
//  int main(){    
//         int num,r,sum=0,temp;    
//         printf("enter the number=");    
//         scanf("%d",&num);    
//         temp=num;    
//         while(num>0){    
//             r=num%10;    
//             sum=sum+(r*r*r);    
//             num=num/10;    
//         }    
//         if(temp==sum)    
//         printf("armstrong  number ");    
//         else    
//         printf("not armstrong number");    
    
//     return 0;  
// }
