//signed 可以存放符号位 
//unsigned 不可以存放符号位
#include  <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	unsigned short a;
	short b;
	a=-1;
	b=-1;
	printf("%d\n", b);//%d可以负数
	printf("%u\n", a);
	return 0;
}