#include <stdio.h>
#include <stdarg.h>
int sum(int n, ...);
//... 表示参数不确定
//sum函数实现求后面五个参数的和
int sum(int n, ...)
{
	int i,sum=0;
	va_list vap;//定义参数列表
	va_start(vap,n);//初始化参数列表
	for (i = 0; i <n; ++i)
	{
		sum+=va_arg(vap,int);//定义参数类型
	}
	va_end(vap);//关闭参数列表
	return sum;
}
int main(int argc, char const *argv[])
{
	int result;
	result=sum(3,121,125,123);//需要输入个数
	printf("result is :%d\n",result );
	return 0;
}