#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int n,i = 1;
	double s = 0.0;
	scanf("%d",&n);
	while(i <= n){
		s+=sqrt(i);
		i++;
	}
	printf("sum = %.2f\n",s );
	return 0;
}