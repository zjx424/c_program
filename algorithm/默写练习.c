#include <stdio.h>

void quick_sort(int arr[],int left,int right)
{
	int i=left,j=right;
	int pivot=arr[(left+right)/2];
	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if (i<=j)
		{
			int temp=arr[i];
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
	int arr[]={4,7,2,1,8,5,6,9,3,10,12,13,11};
	int i,length;
	length=sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr,0,length-1);
	for (int i = 0; i < length; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}