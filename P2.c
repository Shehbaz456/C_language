#include<stdio.h>

int main(){
    int n1 , n2,n3;
    printf("Enter Three num and we give Who is Greatest integer\n");
    scanf("%d %d %d",&n1 , &n2 , &n3);

    if (n1>=n2 && n1>=n3)
    {
        printf("This n1 is greatest integer =%d",n1);
    }
    else if (n2>=n1 && n2>=n3)
    {
        printf("This n2 is greatest integer =%d",n2);
    }
    else if (n3>=n2 && n3>=n2)
    {
        printf("This n3 is greatest integer =%d",n3);
    }
    return 0;
}