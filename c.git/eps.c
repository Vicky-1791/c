#include <stdio.h>
#include <math.h>

int main(void) {
    double eps,sum,item;
    int denominator,flag;
    scanf("%lf", &eps);
    
    sum = 0.0;
    denominator = 1;  
    flag = 1;                   
    
    do {
        item = flag * 1.0 / denominator;
        sum = sum + item;
        
        flag = -flag;           
        denominator += 3;       
    } while (fabs(item) > eps); 
    
    printf("sum = %.6f\n", sum);
    return 0;
}