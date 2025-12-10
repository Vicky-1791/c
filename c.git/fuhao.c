#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	if (n<=2000||n>2100)
	{
		printf("Invalid year!");
		return 0;
	}

	int a=0;
	for (int i = 2001; i <=n; ++i)
	{
		if ((i%4==0&&i%100!=0)||(i%400==0))
		{
			a = 1;
			printf("%d\n",i );
		}
	}if(a==0)
	{
		printf("None");
	}

	return 0;
}