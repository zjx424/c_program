#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 使用自定义的fact的函数计算1!+2!+3!+...100!的值 */

	int i=1;
	double sum;
	double fact(int n);

	for (;i<=100;i++)
	{
		sum+=fact(i);
	}
	printf("1!+2!+3!+...100!的值为%e\n",sum);

	return 0;
}
double fact(int n)
{
	int i;
	double result;
	for (result=1,i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}