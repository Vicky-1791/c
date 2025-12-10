#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count =0,i,n;
    double score,total=0.0 ;
    scanf("%d",&n);

    if(n>0){for (i = 1; i <= n ; i++)
    {
        scanf("%lf",&score);
        total+=score;
        if (score>=60)
        {
            count++;
        }
    }
    printf("average = %.2f\n",total/n);
    printf("count = %d\n", count);}
    else {
        printf("average = 0.00\n");
        printf("count = 0\n");
    }


    return 0;
}