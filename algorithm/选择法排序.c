//输入一个正整数n，在输入n个正整数，将它们存入数组array中，用选择法对数组array按从小到大依次排列
/*选择法排序：
在n个数中，找到最大的那个数，然后把那个数放到最后，然后，找到前n-1个数中找到最大的那个，放到倒数第二位*/
#include <stdio.h>

int findMaxIndex(int arr[],int n)//在n个数中,找到最大值的位置的函数
{
	int max=arr[0];//假设第0个是最大值
	int pos=0;//假设第0个位值位最大值
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]>max)//从小到大，还是从大到小，只需要改变这里的符号
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
		int pos=findMaxIndex(arr,n);
		int temp=arr[pos];//交换
		arr[pos]=arr[n-1];
		arr[n-1]=temp;
		n--;
	}
}
int main(int argc, char const *argv[])
{
	int arr[]={45,789,123,78,23,123};
	int n=6;
	selectionSort(arr,6);
	for (int i = 0; i <6 ; ++i)
	{
		/* code */
		printf("%d\n",arr[i] );
	}
	return 0;
}
