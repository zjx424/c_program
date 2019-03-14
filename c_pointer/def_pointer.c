#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 指针的定义:就是指向一个东西,指针是一个地址
	*是取值,&是取地址
	*/
	int i=123; //定义一个指向整型的指针
	int *pi=&i;

				//注意:还有一个void 指针,它指向无类型,void 就是无类型的意思

	char ch='A'; //定义一个指向字符的指针
	char *pch=&ch;

// 可以通过改变指针指向的值来间接改变值,改变值之后,地址原来是多少就是多少,这里只是改变了值
	i=*pi+1;

	printf("i 的值为:%d\n",i );
	printf("*pi 的值为:%d\n",*pi);
	printf("i 的地址为:%p\n",&i );
	printf("pi 的值为:%p\n",pi );

	printf("ch 的值为:%c\n",ch );
	printf("*pch 的值为:%c\n",*pch);
	printf("ch 的地址为:%p\n",&ch );
	printf("pch 的值为:%p\n",pch );

	//指针存放的字节大小为:8个字节,在我的编译系统里是这样,但是存放的字节数,根据编译系统的不同而不同
	printf("sizeof pi =%d\n", sizeof(pi));
	printf("sizeof pch =%d\n", sizeof(pch));


	return 0;
}