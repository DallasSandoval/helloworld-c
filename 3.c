#include <stdio.h>
int main(void)
{
    int m, n;
    for (m = 0, n = 1; n < 101; n++)
    {
        m = m + n;
    }
    printf("%d", m);
}