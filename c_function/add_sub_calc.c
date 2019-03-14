#include <stdio.h>
//定义两个函数来实现加减操作
//再利用一个calc函数来完成 add和sub运算，指针函数的妙用
int add(int,int);
int sub(int,int);
int calc(int (*fp)(int,int),int,int);
int add(int num1,int num2)
{
	return num1+num2;
}
int sub(int num1,int num2)
{
	return num1-num2;
}
int calc(int (*fp)(int,int),int num1,int num2)
{
	return (*fp)(num1,num2);
}
int main(int argc, char const *argv[])
{
	/* code */
	printf("3+5 = %d\n",calc(add,3,5) );
	printf("4-5 = %d\n",calc(sub,4,5) );
	return 0;
}