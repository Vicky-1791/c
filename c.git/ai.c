#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for usleep
#include <time.h>

// 这是把 Windows 程序移植到 macOS 的简化版本：
// - 移除了 <Windows.h>
// - 用 usleep 替代 Sleep（ms -> us）
// - 修正了 for 循环条件 (i < 100)
// - 初始化数组并修正计数更新逻辑

int main(void) {
    int num[100];
    int i;

    // 初始化随机数种子并为每个位置设置一个随机计数
    srand((unsigned)time(NULL));
    for (i = 0; i < 100; ++i) num[i] = rand() % 20;

    // 取消 stdout 缓冲，便于实时输出动画效果
    setbuf(stdout, NULL);

    while (1) {
        for (i = 0; i < 100; ++i) {
            if (num[i] > 1) {
                // 根据奇偶显示不同字符串
                printf("%s", (num[i] % 2) ? "610" : "要永远开心！");
            } else {
                // 用空格占位，保持列对齐
                printf("              ");
            }

            // 先递减计数，若小于 0 则重置为随机值
            if (--num[i] < 0) num[i] = rand() % 20;

            // Sleep(25) 在 Windows 上是 25 毫秒，usleep 要乘以 1000
            usleep(25 * 1000);
        }

        // 在 macOS 终端用 ANSI 转义序列改变颜色（可选），然后换行并重置颜色
        // 如果不想要颜色，可以去掉下面两行
        printf("\033[36m"); // 例如青色
        printf("\n");
        printf("\033[0m"); // 重置颜色
    }

    return 0;
}