#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("你想寻找不大于多少的质数?\n");
	int n;
	scanf("%d",&n);
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
	printf("找到这些质数:\n");
	for(int i=2;i<=n;i++)
	{
		if(is_prime[i])
		{
			printf("%d ",i);
		}
	}
}
