#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	数组名只是一个地址,而指针是一个左值 
	指针数组是数组,数组指针是指针

	int *p1[5] 指针数组
	指针数组是一个数组,每个数组元素存放一个指针变量
	
	int (*p2)[5] 数组指针
	数组指针是一个指针,它指向的是一个数组
	*/
	char str[]="www.baidu.com";
	char *target =str;
	int count=0;

	while(*target++ != '\0')
	//根据优先级,先计算++,后*
	{
		count++;
	}
	printf("%d\n",count );
	return 0;
}