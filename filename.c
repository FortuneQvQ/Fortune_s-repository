#include <stdio.h>
#include <ctype.h>


int main(void)
{
	//a[student][subject]
	//input each student's grade of each subject:
	int a[5][5] ;
	int max[5]={0}, min[5]={100,100,100,100,100}, total[5] = {0};
	float avg[5];
	for (int i = 1; i <= 5; i++)
	{
		printf("Input the grade of student %d:", i);
		scanf_s(" %d %d %d %d %d",&a[i-1][0], &a[i - 1][1], &a[i - 1][2], &a[i - 1][3], &a[i - 1][4]);
	}
	
	printf("total score and average score of student:\n");
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			total[i] += a[i][j];
		}
		avg[i] = (float)total[i] / 5.0f;
		printf("student %d:   %d,%.2f\n", i + 1,total[i],avg[i]);
	}
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			if (max[i] < a[j][i])
			{
				max[i] = a[j][i];
			}
			if (min[i] > a[j][i])
			{
				min[i] = a[j][i];
			}
		}		
	}
	printf("high score:\n");
	for (int i = 0; i <= 4; i++)
	{
		printf("%d  ", max[i]);
	}
	printf("\nlow score:\n");
	for (int i = 0; i <= 4; i++)
	{
		printf("%d  ", min[i]);
	}
}
