#include <stdio.h>

int main()
{
    int v = 3 ^ 3;
    printf(" V value is %d\n ", v);

    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("divisibal  test returns: %d \n ", num % 97);

    //Q4 evaluate 3*x/y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    printf("your result is %d\n" , result);
    // 6/y-3+1
    // 2-3+1 
    // =0
    return 0;
}
