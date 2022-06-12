#include<stdio.h>
float pow(float,int);
int main(){
    int b,pow1;
    float a;
    printf("Enter two number = ");
    scanf("%f %d",&a,&b);
    pow1=pow(a,b);
    printf("a rise to the b");

    return 0;
}
float pow(float x,int y){
    int i;
    float p=1;
    for (int i = 1; i < y ; i++){
        p=p*x;
    }
    return p;
}