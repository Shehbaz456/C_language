// #include<stdio.h>

// int main(){
//     int arr[] = {2,4,6};
//     int *j,*k,*T ,Sum;
//     j=&arr[0];
//     k=&arr[1];
//     T=&arr[2];
//     Sum = (*j)+(*k)+(*T);
//     printf(" Sum  is %d ",Sum);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int arr[5];
//     int Sum=0;
//     printf("Enter 5 element you want to sum ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&arr[i]);
//         Sum = Sum+arr[i];
//     }
//     printf(" Sum  is %d ",Sum);
//     return 0;
// }

// Program 39: write a program using pointer to compute the sum of all elements Stored in the Array.

// #include<stdio.h>
// int main(){
//     int arr[5];
//     int Sum=0,*p,i,j=0;
//     printf("Enter 5 element you want to sum ");
//     for ( i = 0; i < 5; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     p=arr;
//     while (j<5)
//     {
//         printf(" \n %d. %d",j,*p);
//         Sum = Sum+*p;
//         j++;
//         p++;
//     }
//     printf("\n Sum of all elements = %d ",Sum);    
//     return 0;
// }


#include<stdio.h>
void sort(int*);
int main(){
    int arr[5];
    int *p,i;
    printf("Enter 5 element you want to Short ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr);
    
    return 0;
}
// void sort(int *p){
//     int i,j,temp;
//     for ( i = 0; i <5; i++)
//     for(j=0;j=5;j++);
//     if (*(P+j))
//     {
//         /* code */
//     }
    
    
// }

