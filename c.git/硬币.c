#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);

	int count=0,total;
	int a,b,c,r;

	for (a = (x-3)/5; a>=1; a--)
	{
		r=x-a*5;
	
	for (b = (r-1)/2; b>=1; b--)
	{
		c=r-b*2;
	
	if (c>=1)
	{
		count++;
		total=a+b+c;
        printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", a,b,c,total);
        }
      }
	}
	printf("count = %d\n", count);
	return 0;
}