//插入排序法
/*
2，3，5，6，4，7 第一步假设2，3，5，6已经是排好序的，把4看成是key，即arr[i]=key 当arr[i-1]>key 就把arr[i]=arr[i-1];当arr[i-1]<key的时候就把arr[i]=key
特殊情况就是当i=0时，是最前面的一个数，没有数可以和他比较，所有当i=1的时候要break
*/
#include <stdio.h>

void insert(int arr[],int n)//这里的n表示第n个数字，而不是序列
{
	int key=arr[n];
	int i=n;
	while (arr[i-1]>key)//只需要改变这里的符号就可以改变从小到大还是从大到小
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
	for (int i = 1; i < n; ++i)//假设第1个就是已经排好序的
	{
		insert(arr,i);
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={4,2,8,36,74,32,94,12};
	int n=8;
	InsertionSort(arr,n);
	for (int i = 0; i < 8; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}