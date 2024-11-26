#include <stdio.h>
int main(){
    int n ;
    int nbr_inv=0 ;
    printf("Enter a three-digit number : ");
    scanf("%d",&n);
    while (n!=0){
        nbr_inv = nbr_inv*10 + (n%10);
        n = n / 10 ;
    }

    printf("The reversed number is : %d",nbr_inv);
    return 0 ;
}