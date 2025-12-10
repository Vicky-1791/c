#include<stdio.h>
int main() {
    double x, y, z;
    scanf("%lf %lf", &x, &y);
    
    z = (x - y) / y * 100;  
    
    if (z < 10.0) {
        printf("OK");
    } else if (z < 50.0) {
        printf("Exceed %.0f%%. Ticket 200\n", z);
    } else {
        printf("Exceed %.0f%%. License Revoked\n", z);
    }
    
    return 0;
}