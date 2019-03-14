#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 指针数组是数组
	   数组指针是指针

	int *p1[5] 因为它先计算[],所以他是一个数组
	int (*p1)[5] 因为它先计算*,所以它是一个指针

	指针数组是一个数组,每个元素存放一个指针变量
	指针数组用于处理字符串数组有妙用
 	*/
 	char *p[4]={
 		"www.baidu.com",
 		"www.google.com",
 		"www.bilibili.com",
 		"www.youtube.com"};
 	int i;
 	for (i=0;i<4;i++)
 	{
 		printf("%s\n",p[i] );
 	}

	return 0;
}