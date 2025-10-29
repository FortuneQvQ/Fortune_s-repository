#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll(void)
{
	return rand()%6+rand()%6+2;
}

bool playgame(void)
{
	int r=roll();
	int aim;
	printf("你抽到了:%d\n",r);
	aim=r;
	if(r==7||r==11)
	{
		printf("你赢了！\n");
		return 1;
	}
	else if(r==2||r==3||r==12)
	{
		printf("你输了...\n");
		return 0;
	}
	else
	{
		for(;;)
		{
			r=roll();
			printf("你抽到了:%d\n",r);
			if(r==aim)
			{
				printf("你赢了！\n");
				return 1;
			}
			else if(r==7)
			{
				printf("你输了...\n");
				return 0;
			}			
		}	
	}
}

int main(void)
{
	int wins=0,fails=0;
	srand((unsigned) time(NULL));
play:
	if(playgame()==1)
		wins+=1;
	else
		fails+=1;
	
	printf("再玩一次?\n");	
	
	if(getchar()=='1')
	{
		while(getchar()!='\n');
		goto play;
	}
	else
	{
		printf("结算：wins:%d  fails:%d",wins,fails);
	}
}
