#include <stdio.h>
int main(){
    int v , nbr_canette ;
    printf("Enter the volume in liters : ");
    scanf("%d",&v);
    nbr_canette = (v*100)/33 ;
    printf("The number of cans filled is : %d",nbr_canette);
    return 0 ;
}