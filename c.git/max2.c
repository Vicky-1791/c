#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,x;
	scanf("%d %d",&a,&b);

	if (a>b)
	{
		x=a;
		a=b;
		b=x;
	}
	printf("The max of %d and %d is:%d\n",a,b,b );
	return 0;
}