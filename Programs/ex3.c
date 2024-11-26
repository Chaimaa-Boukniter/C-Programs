#include <stdio.h>
int main()
{
    float a , b , p;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    p = a*b;
    printf("The product is : %.3f",p);
    return 0 ;
}