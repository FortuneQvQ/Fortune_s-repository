#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//使用方式：在exe文件所在目录下打开命令行输入find_prime [质数寻找范围（小于它的质数都将被找到）]
int main(int argc,char* argv[])
{	
	(void)argc;
	int n=atoi(argv[1]);
	bool is_prime[n+1];
	is_prime[0]=is_prime[1]=0;
	int primes[n+1];
	int count=0;
	for(int i=2;i<=n;i++)
	{
		is_prime[i]=1;
	}
	for(int i=2;i<=n;i++)
	{
		if(is_prime[i])
		{
			primes[count++]=i;
		}
		for(int j=0;j<count&&i*primes[j]<=n;j++)
		{
			int composite=i*primes[j];
			is_prime[composite]=0;
			if(i%primes[j]==0)
			break;
		}
	}
	printf("ÕÒµ½%d¸öÖÊÊý:\n",count);
	for(int i=2;i<=n;i++)
	{
		if(is_prime[i])
		{
			printf("%d ",i);
		}
	}
}

