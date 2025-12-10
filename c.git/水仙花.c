#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int first = 1;
	int i = 1;
	while(i<n){
		first*=10;
		i++;
	}
    int end;
	int a;
	end=first*10;
	for(a=first;a<=end;a++){
		int sum =0;
		int t=a;

		while(t>0){
			int b = t%10;
			sum+=pow(b,n);
			t/=10;
		}
		if (sum==a)
		{
			printf("%d\n",a );
		}
	}
	return 0;
}