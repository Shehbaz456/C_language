#include<stdio.h>

int main(){
    float Len ,br  , r , Area_rectangle, Perimeter;
    float pi=3.14 , Area_Circle ,circumfrence_circle ;
    printf("Enter Length of Rectangle =  ");
    scanf("%f",&Len);
    printf("Enter Breath of Rectangle =  ");
    scanf("%f",&br);
    printf("Enter Radius of circle =  ");
    scanf("%f",&r);
    Area_rectangle = Len*br ;
    Perimeter = 2*(Len+br);
    Area_Circle = pi*r*r;
    circumfrence_circle = 2*pi*r;
    printf("This is Area of Rectangle is = %0.1f \n", Area_rectangle);
    printf("This is Perimeter of Rectangle is = %0.1f \n",Perimeter );
    printf("This is Area_Circle  is = %0.1f \n", Area_Circle );
    printf("This is circumfrence_circle  is = %0.1f \n", circumfrence_circle );
    
    return 0;
}