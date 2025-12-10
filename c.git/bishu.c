#include "stdio.h"
int main(){
    int a,b,c,d;
    int y;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(a>b){y=a;a=b;b=y;}
    if(a>c){y=a;a=c;c=y;}
    if(a>d){y=a;a=d;d=y;}
    
    if(b>c){y=b;b=c;c=y;}
    if(b>d){y=b;b=d;d=y;}
    
    if(c>d){y=c;c=d;d=y;}
    
    printf("%d=>%d=>%d=>%d",a,b,c,d);
    
    return 0;
}
