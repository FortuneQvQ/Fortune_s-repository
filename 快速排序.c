#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			swap(&arr[++i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}

void quickSort(int arr[],int low,int high)
{
	if(low>=high)
	return;
	else
	{
		int pi=partition(arr,low,high);		
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

int main(void)
{
	int a[100];
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,99);
	printf("Result:\n");
	for(int i=0;i<100;i++)
	{
		printf("%d ",a[i]);
	}
}
