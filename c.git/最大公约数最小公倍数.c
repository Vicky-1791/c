#include <stdio.h>

int main() {
    int M, N,t,x,y;
    scanf("%d %d", &M, &N);
    
    while (N != 0) {
        t = N;
        N = M % N;
        M = t;
    }
    x = M;
    y = M * N / x;
    
    printf("%d %d\n", x, y);
    
    return 0;
}