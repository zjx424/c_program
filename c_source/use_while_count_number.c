#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 统计从键盘输入的一行英文句子的字符个数 */
	int count=0;
	printf("please input :");
	while (getchar()!='\n')
	{
		count=count+1;
	}
	printf("the number of chars is %d\n",count );
	return 0;
}