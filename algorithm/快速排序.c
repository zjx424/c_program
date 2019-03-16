//快速排序算法的基本思路是：通过一趟排序将待排序的数据分割成独立的两部分，其中一部分的所有元素
//均比另一部分的元素小，然后分别对这两部分继续进行排序，重复上述步骤直到排序完成
#include <stdio.h>
/* i==left             j==right*/
void quick_sort(int arr[],int left,int right)//left是左边的下标，right是右边的下标
{
	int i=left,j=right;
	int temp;
	int pivot;//基准点
	pivot = arr[(left+right)/2];
	while (i<=j)
	{
		//从左到右找到大于等于基准点的元素
		while(arr[i]<pivot)
		{
			i++;
		}
		//从右到左找到小于等于基准点的元素
		while(arr[j]>pivot)
		{
			j--;
		}
		//如果i<=j 则互换
		if (i<=j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	if (left<j)
	{
		quick_sort(arr,left,j);
	}
	if (i<right)
	{
		quick_sort(arr,i,right);
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