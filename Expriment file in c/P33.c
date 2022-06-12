#include<stdio.h>

int main(){
    int n, i,flag = 0;
    printf("Enter Positive integer: " );
    scanf("%d",&n);

    for ( i = 2; i <=n/2; i++){
    //coduction for non-prime;
        if (n % i == 0){
            flag = 1;
            break;
        }  
    }  

    if (n==1){
         printf("1 is neither Prime nor Composite.");
    }
    else
    {
        if (flag ==0){
            printf("This is prime number = %d \n",n);
        }
        else{
            printf("This is prime number = %d \n",n);   
        } 
    }
    return 0;
}