#include <stdio.h>

int square(int num);
int square(int num)
{
	return num*num;
}
int main(int argc, char const *argv[])
{
	/* code */
	int num;
	int (*fp)(int);
	//fp指向square，且square有一个整型返回值，有一个整型输入
	printf("please input a num:");
	scanf("%d",&num);
	fp=square;//函数名在运算之后得到的就是一个地址
	//函数名相当于函数的地址

	printf("the square is :%d\n",fp(num));
	//这里使用*fp，而不是square
	return 0;
}