#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int r;
	double v,s;

	scanf("%d",&r);
	v=(4/3.0)*3.1415926*pow(r,3);
	s=4*3.1415926*pow(r,2);

	printf("Volume=%.3lf,Sufacearea=%.3lf",v,s);

	return 0;
}