#include <stdio.h>

int main(void)
{
    int num;
    printf("输入成绩\n");
    scanf("%d", &num);
    if (num<0 & num> 100)
    {
        printf("数据非法\n");
    }
    else if (num >= 0 & num < 60)
    {
        printf("不及格\n");
    }
    else if (num >= 60 & num <= 100)
    {
        printf("及格\n");
    }
    return 0;
}
