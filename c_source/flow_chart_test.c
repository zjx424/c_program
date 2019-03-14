#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	利用getchar可以过滤掉回车
	*/
	int a,b;
	printf("please input two number a and b:");
	scanf("%d %d",&a,&b);
	
	if (a!=b)
	{
		if (a>b)
		{
			printf("a>b\n");
		}
		else
		{
			printf("a<b\n");
		}
	}
	else
	{
		printf("a=b\n");
	}

	return 0;
}