#include <stdio.h>

void sort(int n,int a[n])
{
	int temp;
	if(n==1)
	{
		return;
	}
	else
	{
		for(int i=0;i<=n-2;i++)
		{
			if(a[i]<a[i+1])
			{
				;
			}
			else
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		sort(n-1,a);
	}
}


int main(void)
{
	int n;
	printf("输入要排序的数字个数:");
	scanf("%d",&n);
	int a[n];
	printf("请输入这%d个数:\n",n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(n,a);
	printf("结果是:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
