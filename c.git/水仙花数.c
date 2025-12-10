int narcissistic(int number){
    int i, digit, n = 0;
    int s = 0;  // 改为int类型，避免浮点数精度问题
    
    // 计算位数
    for(i = number; i > 0; i = i / 10){
        n++;
    }
    
    // 计算各位数字的n次幂之和
    for(i = number; i > 0; i = i / 10){
        digit = i % 10;
        
        // 手动计算幂，避免浮点数问题
        int power = 1;
        for(int j = 0; j < n; j++) {
            power *= digit;
        }
        s = s + power;
    }
    
    if(s == number)
        return 1;
    else
        return 0;
}

void PrintN(int m, int n){
    int x;
    for(x = m; x <= n; x++)
        if(narcissistic(x)){
            printf("%d\n", x);
        }
}