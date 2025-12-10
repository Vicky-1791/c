#include<stdio.h>
int main(int argc, char const *argv[])
{
	int count,i,n;
	double score,total;

	scanf("%d",&n);
	total = 0.0;
	count = 0;
	if(n!=0){
	for (i = 1; i <=n; ++i)
	{
		scanf("%lf",&score);
		total+=score;
		if (score>=60){
			count++;
		}
	}
		printf("average = %.1f\n", total/n);
	printf("count = %d\n", count);
}else{
	printf("average = 0\n");
	printf("count = 0");
}
return 0;
}