#include <stdio.h>
int main(int argc, char const *argv[])
{
	int array[3][4];
	int i,j,k=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			array[i][j]=k++;
		}
	}

	printf("*(array+1): %p\n",*(array+1));//*(array+1)为array[1][0]的地址
	printf("array[1]:%p\n",array[1]);//array[1]是一个地址 
	printf("&array[1][0] :%p\n",&array[1][0]);
	printf("*(*(array+1)+1): %d\n",*(*(array+1)+1));

	//对于一维数组来说*(array+i)==array[i]就是对应的值相等
	
	//对于二维数组来说*(array+i)==array[i]这里是两个地址相等,而不是两个值相等
	//*(*(array+i)+j)==array[i][j]适用与二维数组
/*
0 1 2  3 
4 5 6  7
8 9 10 11
 */
	
	//array和array+1之间跨越了16个字节,也就是说从array[0][0]跨越到array[1][0]
	



	return 0;
}