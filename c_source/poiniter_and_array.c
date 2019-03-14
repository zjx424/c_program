#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 数组名其实是数组的第一个元素的地址 
	   *(p+1),不是地址加一字节,然后对应*(p+1)的值
	   而是p地址的下一个地址

	   利用b也可以取值

	*/
	int b[5]={1,2,3,4,5};



	printf("*p=%d,*(p+2)=%d,*(p+2)=%d\n",*b,*(b+1),*(b+2) );



	return 0;
}   