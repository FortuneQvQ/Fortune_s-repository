#include <stdio.h>
#include <ctype.h>

int main(void)
{
start:
	printf("����һ������:");
	scanf_s("");
	char c; int n=0;
	for (;;)
	{
		c = getchar();			
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			n += 1;		
		else if (c == '\n')
			break;
	}
	printf("��%d��Ԫ����ĸ\n", n);
	goto start;
}
