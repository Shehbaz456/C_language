// #include<stdio.h>

// int main(){
//     auto int i,j;
//     printf("%d %d\n",i,j);    //give Garbage value
//     return 0;
// }

#include<stdio.h>

int main(){
    auto int i=1;
    {
        auto int i=2;{
            auto int i=3;
            printf("%d",i);
        }
        printf("%d",i);
    }
    printf("%d",i); 
    return 0;
}