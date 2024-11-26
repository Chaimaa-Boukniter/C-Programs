#include <stdio.h>
int main ()
{
    int a , b ;
    float f ;
    printf("Enter the fraction between two integers in the form a/b : ");
    scanf("%d/%d",&a,&b);
    f =(float)a/b ;
    printf("%d/%d=%.4f",a,b,f);
    return 0 ;
}