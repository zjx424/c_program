#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 利用数组计算斐波那契数列 */
	int fib[100]={1,1},i;
	for (i=2;i<20;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for (i = 0; i < 20; ++i)
	{
		/* code */
		printf("%d\t",fib[i] );
		if ((i+1)%5==0)
		{
			printf("\n");
		}
	}
	return 0;
}