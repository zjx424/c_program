#include  <stdio.h>
void insert(int arr[],int n)
{
	int key=arr[n];
	int i=n;
	while (key<arr[i-1])
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
	int arr[]={4,7,2,1,8,5,6,9,3,10,12,13,11};
	int n=13;
	InsertionSort(arr,n);
	for (int i = 0; i < 13; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}