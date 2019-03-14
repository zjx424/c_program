#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	/* 双目运算符和单目运算符取决于
	   操作数一共有几个,
	   操作数有两个则是双目运算符
	   有一个则是单目运算符


	   float转int是直接把待转换的小数点去掉,以实现转换 
	   使用(int)

	   && 逻辑与
	   || 逻辑或
	   ! 非
	*/
	int a;
	float b;
	a=1;
	b=2.0;
	printf("%d\n",a+(int)b );
	printf("%f\n",a+b );



	
	return 0;
}