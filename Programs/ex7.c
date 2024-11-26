#include <stdio.h>
int main ()
{
    int a , b ;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    if(a>b)
        printf("The largest number is : %d",a);
    else if (a<b)
        printf("The smallest number is : %d",b);
    else 
        printf("The two numbers are equal");
    return 0 ;
}