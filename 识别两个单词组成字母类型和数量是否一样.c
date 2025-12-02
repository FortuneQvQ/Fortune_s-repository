#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a[26] = { 0 };
	char c;
	scanf_s(" ");
	for (;;)
	{
		c = tolower(getchar());
		for (int i = 0; i <= 25; i++)
		{
			if (c == 'a' + i)
				a[i] += 1;
		}
		if (c == '\n')
			break;
	}
	scanf_s(" ");
	for (;;)
	{
		c = tolower(getchar()0;
		for (int i = 0; i <= 25; i++)
		{
			if (c == 'a' + i)
				a[i] -= 1;
		}
		if (c == '\n')
			break;
	}
	for (int i = 0; i <= 25; i++)
	{
		if (a[i] != 0)
		{
			printf("不是");
			return 0;
		}
	}
	printf("是的");

}
