#include<stdio.h>

int main(){
    float p,t,r;
    float simple_interest;
    printf("Enter principle Amount = ");
    scanf("%f",&p);
    printf("Enter rate = ");
    scanf("%f",&r);
    printf("Enter no of years = ");
    scanf("%f",&t);

    simple_interest = (p*t*r)/100;
    printf(" this is simple interest of amount = %0.1f",simple_interest);
    return 0;
}