#include <stdio.h>
int main ()
{
    int a , b ;
    float m ;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    m = (a+b)/2 ;
    printf("The average is : %.2f",m);
    return 0;
}