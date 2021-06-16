//一维数组中删除所有值为X的元素
#include <stdio.h>
int main(void)
{
    int num, i, j = 1, x; //i是位数
    printf("输入数字\n");
    scanf("%d", &num);
    for (; num > 1; i++)
    {
        num = num / 10;
    }
    printf("%d\n", i);

    int zu[i + 1];
    printf("输入x\n");
    scanf("%d", &x);
    for (i - 1; num > 1; i--, j++)
    {
        zu[j] = num / (10 ^ i);
    }
    printf("%d", &zu);
}