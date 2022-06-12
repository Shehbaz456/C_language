#include<stdio.h>
struct book
{
    char name[50];
    char Author[40];
    int Pages;
};
void display(struct book *ba);
int main(){
    struct book b1 = {"Shehbaz","code_Power_Harry",10};
    display(&b1);
    printf("size of b1 is %d \n",sizeof(b1));
    printf("size of b1 is %d\n",sizeof(b1.name));
    printf("size of b1 is %d\n",sizeof(b1.Author));
    printf("size of b1 is %d\n",sizeof(b1.Pages));
    return 0;
}
void display(struct book *ba ){
    printf("%s\n",ba->name);
    printf("%s \n",ba->Author);
    printf("%d \n",ba->Pages);
}