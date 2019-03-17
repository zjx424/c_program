//#和##是两个预处理运算符
//在带参数的宏定义中,#运算符后面应该跟一个参数
//预处理器会把这个参数转换为一个字符串
//##运算符被成为记号连接运算符,比如我们可以使用##运算符连接两个参数
#include <stdio.h>
#define SHOWLIST(...) printf(#  __VA_ARGS__)

int main(int argc, char const *argv[])
{
	SHOWLIST(FISH,520,3.14\n);
}