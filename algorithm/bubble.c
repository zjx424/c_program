#include <stdio.h>
void bubble (int arr[],int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		if (arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}

void bubbleSort(int arr[],int n)
{
	for (int i = n; i>1; i--)
	{
		bubble(arr,i);
	}
}

int main(int argc, char const *argv[])
{
	
	int arr[]={3,4,9,4,7,5,6,1,2};
	int n=9;
	bubbleSort(arr,n);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}