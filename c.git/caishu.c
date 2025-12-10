#include<stdio.h>
#include<math.h>
int t=0,x,n,m;
int f=1;
int main()
{
	scanf("%d%d",&n,&m);
    while(1)
{
    scanf("%d",&x);
      t++;
    if(x<0) break;
    if(f&&t<=m)
{
    if(x==n)
  {
     f=0;
if(t>3)
printf("Good Guess!\n");
    else if(t>1) 
    	printf("Lucky You!\n");
    else printf("Bingo!\n");
}
    if(x>n) printf("Too big\n");
    if(x<n) printf("Too small\n");
   }
}
    if(f) printf("Game Over\n");
    return 0;
}