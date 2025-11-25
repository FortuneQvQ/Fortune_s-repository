#include <stdio.h>

void print_demical(int numerator,int denominator,int digits)
{
	int arr[digits+1];
	int int_part;
	int_part=numerator/denominator;
	int* p=arr;
	while(1)
	{
		numerator*=10;
		*p=numerator/denominator;
		numerator%=denominator;
		p++;
		if(p==&arr[digits])
		break;		
	}
	printf("%d.",int_part);
	for(int i=0;i<digits;i++)
	{
		printf("%d",arr[i]);
	}
}

int main(void)
{
    int numerator;
    int denominator;
    int digits;
    printf("按照“被除数/除数，保留小数位数”（中文逗号）的格式输入，我会帮你计算出除法结果XD");
    scanf("%d/%d，%d",&numerator,&denominator,&digits);
    print_demical(numerator,denominator,digits);
}
