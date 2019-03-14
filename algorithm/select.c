#include <stdio.h>
int FindMaxIndex(int arr[],int n)
{
	int max=arr[0];
	int pos=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]>max)
		{
			max=arr[i];
			pos=i;
		}
	}
	return pos;
}


void selectionSort(int arr[],int n)
{
	while(n>1)
	{
		int pos=FindMaxIndex(arr,n);
		int temp=arr[pos];
		arr[pos]=arr[n-1];
		arr[n-1]=temp;
		n--;
	}
}


int main(int argc, char const *argv[])
{
	int arr[]={3,4,9,4,7,5,6,1,2};
	int n=9;
	selectionSort(arr,n);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}