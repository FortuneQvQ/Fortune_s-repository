#include <stdio.h>
#define n 3//修改n的数值来更改幻方的边长

int main(void)
{
	int a[n][n] = { 0 }, x = n / 2, y = 0;
	for (int i = 1; i <= n * n;i++)
	{
		a[x][y] = i;
		if (a[(x + 1) % n][(y + 1) % n] != 0)
		{
			y = (y - 1 + n) % n;
		}
		else
		{
			x = (x + 1) % n; y = (y + 1) % n;
		}
	}
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}

}
