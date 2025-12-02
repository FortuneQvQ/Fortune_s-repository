#include <stdio.h>
#include <stdbool.h>

void way(int i,int j,int a,int b,int map[a+1][b+1],bool reached[a+1][b+1])
{
	if (reached[i][j]==1)
	{
		return;
	}
	else if(reached[i-1][j]==1&&reached[i][j-1]==1)
	{
		map[i][j]=map[i-1][j]+map[i][j-1];
		reached[i][j]=1;
	}
	else if(reached[i-1][j]==1)
	{
		
		way(i,j-1,a,b,map,reached);
		way(i,j,a,b,map,reached);
	}
	else if(reached[i][j-1]==1)
	{
		way(i-1,j,a,b,map,reached);
		way(i,j,a,b,map,reached);
	}
	else
	{
		way(i-1,j,a,b,map,reached);
		way(i,j-1,a,b,map,reached);
		way(i,j,a,b,map,reached);
	}
		
}

int main(void)
{
	int a,b,x,y;
	scanf("%d %d %d %d",&a,&b,&x,&y);
	int map[a+1][b+1];
	bool reached[a+1][b+1];
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			reached[i][j]=0;
		}
	}
	reached[x][y]=1;reached[x+1][y+2]=1;reached[x+2][y+1]=1;reached[x-1][y+2]=1;reached[x-2][y+1]=1;reached[x+1][y-2]=1;reached[x+2][y-1]=1;reached[x-1][y-2]=1;reached[x-2][y-1]=1;
	for(int i=0;i<=a;i++)
	{
		reached[i][0]=1;
		map[i][0]=1;
	}
	for(int i = 0; i <= b; i++)
	{
	    reached[0][i] = 1;
	    map[0][i] = 1;
	}
	
	map[0][0]=1;
	map[x+1][y+2] = 0;
	map[x+2][y+1] = 0;
	map[x-1][y+2] = 0;
	map[x-2][y+1] = 0;
	map[x+1][y-2] = 0;
	map[x+2][y-1] = 0;
	map[x-1][y-2] = 0;
	map[x-2][y-1] = 0;
	way(a,b,a,b,map,reached);
	
	printf("%d",map[a][b]);
}
