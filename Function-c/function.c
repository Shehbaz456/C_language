#include<stdio.h>
void message();
void italy();
void India();
int main(){
    message();
    italy();
    India();
    printf(" The End Show \n\n");   
    return 0;
}
void italy(){
    printf("italy is cool \n ");
    message();
}
void India(){
    printf("India is my Home \n");
    italy();
}
void message(){
    printf("HELLO this is message function \n\n");
    // italy();
}