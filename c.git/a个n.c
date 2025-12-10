#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    
    int s = 0;
    int y = 0;
    int i;
    
    for (i = 0; i < n; i++) {
        y = y * 10 + a;
        s += y;
    }
    
    printf("s = %d\n", s);
    
    return 0;
}