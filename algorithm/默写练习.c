#include <stdio.h>

void insert(int arr[],int n)
{
	int key=arr[n];
	int i=n;
	while (arr[i-1]>key)
	{
		arr[i]=arr[i-1];
		i--;
		if (i==0)
		{
			break;
		}
	}
	arr[i]=key;
}

void InsertionSort(int arr[],int n)
{
	for (int i = 1; i < n; ++i)
	{
		insert(arr,i);
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={4,2,8,6,7,3,9,1,5};
	int n=9;
	InsertionSort(arr,n);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}