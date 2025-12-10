#include<stdio.h>
int main(int argc, char const *argv[])
{
	int g;
	scanf("%d",&g);
	g/=10;
	switch(g){
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
	return 0;
}