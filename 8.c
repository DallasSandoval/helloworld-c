//给定数字从小到大排序
#include <stdio.h>
int main(void)
{
    printf("输入数字个数：");
    int num;
    scanf("%d", &num);
    int line[num];
    for (int in = 0; in <= num; in++)
    {
        printf("输入第%d个数字：", in);
        scanf("%d", &line[in]);
    }
    printf("%d", line);

    return 0;
}