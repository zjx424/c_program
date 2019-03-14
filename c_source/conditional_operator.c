#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*  
	语法: exp1?exp2:exp3;
	-exp1是条件表达式
	-如果结果为真,返回exp2
	-如果结构为假,返回exp3
	*/
	int a,b;
	printf("please input two number ");
	scanf("%d %d",&a,&b);



	a>b?printf("a bigger than b\n"):printf("b bigger than a\n");
	return 0;
}