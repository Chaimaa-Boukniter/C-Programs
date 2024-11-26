#include <stdio.h>
int main ()
{
    int n , a , i;
    printf("Enter a number : ");
    scanf("%d",&n);
    a = n+1 ;
    for(i=a;i<n*10;i++){
        if(a % 2 != 0)
            printf("%d ",a);
    }
    return 0 ;
}