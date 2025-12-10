#include<stdio.h>

int main(void) {
   int n,i,j;
    scanf("%d",&n);

    for ( i = 1; i <= n; i+=2)
    {
        for ( j = 1; j <= (n - i)/2; j+=2)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( i = n-2; i >= 1; i-=2)
    {
        for ( j = 1; j<=(n-i)/2; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
}