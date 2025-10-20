#include <stdio.h>
#include <stdbool.h>
#define cs 100
int main(void)
{
	int lx,lxz, y; float q[5] = { cs,cs,cs,cs,cs };
	printf("ÄêÀûÂÊ¡¢¶àÉÙÄê:\n");
	scanf_s(" %d %d" ,&lx, &y);
	printf("Äê\t");
	for (int i = 0; i <= 4; i++)
	{
		printf("  %d%%\t",lx+i);
	}
	printf("\n");
	for (int n = 1; n <= y; n++)
	{
		printf("%d\t", n);
		for (int j = 0; j <= 4; j++)
		{
			lxz = lx + j;
			q[j] *= (1 + lxz * 0.01);
			printf("%5.3f\t", q[j]);
		}
		printf("\n");
	}

}

