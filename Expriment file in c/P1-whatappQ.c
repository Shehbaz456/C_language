// #include<stdio.h>
// int 
// int main(){
//     float a,b,c,r1,r2,r3,d;
//     printf("Enter the value of a,b,c = ");
//     scanf("%f %f %f",&a,&b,&c);
//     d=b*b-4*a*c;
//     switch (d>0)
//     {
//     case 1:
        
//         break;
    
//     default:
//         break;
//     }
//     return 0;
// }


//Assignment-1
                         // WAP which number is greater number take by the user;

#include<stdio.h>

int main(){
    int a,b,c;
    printf(" we give you who number is greater \n");
    printf("Enter three number ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is greater num",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greater num",b);    
    }
    else{
        printf("%d is greater num",c);        
    }
    return 0;
}