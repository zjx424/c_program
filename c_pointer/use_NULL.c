#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* #define NULL ((void *)0) */
	/*
	当你还不清楚要将指针初始化为 什么地址时,请将它初始化为NULL,
	在对指针进行解引用时,先检查该指针是否NULL.这种策略可以为你今后编写
	大型程序节省大量调试时间
	NULL 用于指向对象,表示控制,指向一个不被使用的地址,而'\0'表示字符串的结尾 
	*/
	int *p1;//迷途指针,悬空指针,野指针
	int *p2=NULL;
	printf("%d\n", *p1);
	printf("%d\n", *p2);

	return 0;
}