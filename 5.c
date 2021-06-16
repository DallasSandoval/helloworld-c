#include <stdio.h>
int main(void)
{
    int x = 1, y = 1;
    for (; y < 10; ++x)
    {
        printf("%2d×%d=%d ", x, y, x * y);
        if (x >= y)
        {
            ++y;
            printf("\n");
            x = 0;
        }
    }
}