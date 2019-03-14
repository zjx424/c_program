	/* 变量的使用 variable 
	变量名:只能用(A-Z,a-z,0-9,_组成),第一个字母必须是字母或者下划线,不能是数字,区分大小写,不能使用关键字,如do,if等\

	s 代表string
	c 代表char

	\0表示字符串的结束位置
	*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char b[]={'h','e','l','l','o','\0'};
	char c[]={"hello girl"};
	int a;
	printf("%s\n", b);
	printf("%s\n", c);
	a=sizeof(b);
	//sizeof是运算符,用于获得数据类型或表达式的长度
	printf("%d\n", a);//这里说明了hello这个字符串实际的长度其实是6,5个字母加一个结束符 \0
}
