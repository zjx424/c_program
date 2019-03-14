#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 利用if 语句实现一个按分数评级的程序 

		C语言用 && 表示and ||表示or


	*/
	int a;
	printf("please input your mark:" );
	scanf("%d",&a);

	if (a>=90)
	{
		printf("your mark is A\n");
	}
	else if (80<=a && a<90)
	{
		printf("your mark is B\n");
	}
	else if (70<=a && a<80)
	{
		printf("your mark is C\n");
	}
	else if (60<=a && a<70)
	{
		printf("your mark is D\n");
	}
	else
	{
		printf("your mark is E\n");
	}

return 0;
}