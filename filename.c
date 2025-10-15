#include <stdio.h>
#include <ctype.h>

int main(void)
{
start:
	printf("输入一个句子:");
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
	printf("有%d个元音字母\n", n);
	goto start;
}
