#include <stdio.h>

int main() {
    int M, N,i,a;
    int count = 0, sum = 0;
    
    scanf("%d %d", &M, &N);
    
    for (i = M; i <= N; i++) {
        if (i == 1) {
            continue;  
        }
        int a = 1;  
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                a = 0;  
                break;
            }
        }
        
        if (a == 1) {
            count++;
            sum += i;
        }
    }
    
    printf("%d %d", count, sum);
    return 0;
}