//判断一个整数中是否出现重复数字

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int num, temp, i = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    temp = num;

    //获取所输入整数的位数。
    while (temp > 0)
    {
        i = i + 1;
        temp = temp / 10;
    }

    //打印所输入整数的位数，并定义一个数组。
    //初始化数组中所有元素为0.
    printf("该数为%d位数。\n", i);
    int a[i + 1]={0};


    //判断是否有重复的数字。
    do
    {
        int n = num % 10;
        if (a[n] == 1)
        {
            printf("出现重复了。\n");
            break;
        }
        a[n] = 1;
        num /= 10;
    } 
    while (num);

    if (num == 0)
    {
        printf("没有重复。\n");
    }

    return 0;
    }

//———————————————— 版权声明：本文为CSDN博主「P.Chen」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。 原文链接：https: //blog.csdn.net/AddyChen/article/details/9050415