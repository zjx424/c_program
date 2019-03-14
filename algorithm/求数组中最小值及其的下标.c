//求数组最小值元素及其下标，输入一个正整数n（1<=n<=10），在输入n个整数，将它们存入数组a中，输出数组a的最小值元素及其下标
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* index 为最小序列 */
	int i,n,index,array[10];
	index=0;
	printf("请输入个数：");
	scanf("%d",&n);
	printf("开始输入：");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&array[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if (array[i]<array[index])
		{
			index=i;
		}
	}
	printf("最小的数为%d，它的序列为%d\n",array[index],index );

	return 0;
}