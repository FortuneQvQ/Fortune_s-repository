#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
	int map[10][10];
	int x = 0, y = 0, act, step=0;	
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			map[i][j] = '.';
		}
	}
	srand((unsigned)time(NULL));
	x = rand() % 10; 
	y = rand() % 10;
	map[x][y] = 'A';
	for (;;)
	{
		bool cango[4] = { 1,1,1,1 };
		if (x == 9 || map[x + 1][y] != '.')
			cango[0] = 0;
		if (y == 9 || map[x][y + 1] != '.')
			cango[1] = 0;
		if (x == 0 || map[x - 1][y] != '.')
			cango[2] = 0;
		if (y == 0 || map[x][y - 1] != '.')
			cango[3] = 0;
		if (cango[0] == 0 && cango[1] == 0 && cango[2] == 0 && cango[3] == 0)
			break;


		act = rand() % 4;
		switch (act)
		{
		case 0:
			if (x == 9||map[x+1][y]!='.')
				continue;
			else
			{
				x += 1;
				step += 1;
				break;
			}
		case 1:
			if (y == 9 || map[x][y+1] != '.')
				continue;
			else
			{
				y += 1;
				step += 1;
				break;
			}
		case 2:
			if (x == 0 || map[x-1][y] != '.')
				continue;
			else 
			{
				x -= 1;
				step += 1;
				break;
			}
		case 3:
			if (y == 0 || map[x][y-1] != '.')
				continue;
			else
			{
				y -= 1;
				step += 1;
				break;
			}			
		}
		map[x][y] = 'A' + step;
		if (step == 25)
			break;
	}

	for (int j = 0; j <= 9; j++)
	{
		for (int i = 0; i <= 9; i++)
		{
			printf(" %c ", (char)map[i][j]);
		}
		printf("\n");
	}
}
