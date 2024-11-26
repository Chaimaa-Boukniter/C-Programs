#include <stdio.h>
int main(){
    int a , b , c ;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("The old value of a is : %d and the old value of b is : %d",a,b);
    c = b ;
    b = a ; 
    a = c ;
    printf("The new value of a is: %d and the new value of b is: %d",a,b);
    return 0 ;
}