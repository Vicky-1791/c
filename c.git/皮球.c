#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int height,n,i;
	double a,b;
	a=0;
	b=0;
	scanf("%d %d",&height,&n);
	if (n==0)
	{
		a=0;
		b=height;
	}else{
		a=height;
		for(i=1;i<n;i++){
			a+=2*height/pow(2,i);
		}
		b=height/pow(2,n);
		printf("%.1f %.1f\n", a,b);
	}
	return 0;
}