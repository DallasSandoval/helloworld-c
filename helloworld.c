#include <stdio.h>

int main(void)
{
	int month = 1, m = 1, n = 1;
	while (month <= 13)
	{
		n = m + n;
		printf("%d %d\n", month, n);
		month++;
		m = m + n;
		printf("%d %d\n", month, m);
		month++;
	}
	return 0;
}