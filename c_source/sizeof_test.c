#include <stdio.h>
int main(int argc, char const *argv[])
{
	//定义字符串变量的两种方法
	char b[]={'h','e','l','l','o','\0'};
	char c[]={"hello girl"};
	int i=123;
	int a;

	char j='C';

	printf("%s\n", b);
	printf("%s\n", c);
	a=sizeof(c);
	//sizeof是运算符,用于获得数据类型或表达式的长度
	printf("%d\n", a);//这里说明了hello这个字符串实际的长度其实是6,5个字母加一个结束符 \0

	printf("int sizeof is %d\n",sizeof(int) );
	printf("sizeof the i is %d\n",sizeof(i));

	printf("sizeof the j is %d\n",sizeof(j));

	printf("sizeof the float is %d\n",sizeof(float));
	printf("sizeof the double is %d\n",sizeof(double));
	//单位是字节


	return 0;


}
