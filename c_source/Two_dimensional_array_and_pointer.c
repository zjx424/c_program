#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 解引用 *(array+1)==array[1]  在本例二维数组中,array[1]仍然是一个指针,但是在一位数组中array[1]则是一个值
	结论很重要*(array+1)==array[1] 
			*(*(array+i)+j)	= array[i][j]
			
	*/
	int array[4][5];
	int i,j,k=0;
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			array[i][j]=k++;
		}
	}

	printf("size of int is %d\n",sizeof(int) );
	printf("array pointer is %p\n",array);
	//跨越了5个元素,即是从array[0][0]到array[1][0]
	printf("array+1  is %p\n",array+1);
	printf("array[1]  is %p\n",array[1]);
	printf("&array[1][0] is %p\n",&array[1][0]);
	printf("**(array+1) is %d\n",**(array+1));
	printf("*(array[1]) is %d\n",*(array[1]));
	printf("array[1][2] is %d\n",array[1][2]);

	return 0;
}