#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 取地址运算符&
	   取值运算符*
	   指针占4个字节
	*/ 
	int a=123;
	int *pa=&a;

	char ch='A';
	char *pc=&ch;

	printf("%d\n",*pa );
	printf("%c\n",*pc );


	*pc='C';
	*pa+=1;

	printf("now,a=%d\n",*pa);
	printf("now,ch=%c\n",*pc );

	printf("the address of a is %p\n",pa);
	printf("the address of ch is %p\n",pc);



	return 0;
}