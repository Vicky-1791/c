#include<stdio.h>
#include<math.h>

int main() {
    double x1, x2, x3, y1, y2, y3;
    double l1, l2, l3, L, A, s;
    
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    l1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    l2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    l3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        L = l1 + l2 + l3;
        
        s = L / 2;  
        A = sqrt(s * (s - l1) * (s - l2) * (s - l3));
        
        printf("L = %.2lf, A = %.2lf\n", L, A);
    } else {
        printf("Impossible\n");
    }
    
    return 0;
}