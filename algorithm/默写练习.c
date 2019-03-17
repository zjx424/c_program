#include <stdio.h>
void quick_sort(int arr[],int left,int right)
{
	int i=left,j=right;
	int pivot=arr[(right+left)/2];
	int temp;
	while (i<=j)
	{
		while (arr[i]<pivot)
		{
			i++;
		}
		while (arr[j]>pivot)
		{
			j--;
		}
		if (i<=j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	if (i<right)
	{
		quick_sort(arr,i,right);
	}
	if (j>left)
	{
		quick_sort(arr,left,j);
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={10,3,5,6,9,8,7,4,1,2,13,11,12};
	int length=sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr,0,length);
	for (int i = 0; i < 13; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}