#include <stdio.h>
void a();
void b();
void c();
//多文件执行 extern
//不能用ctrl + B  运行的原因是，编译系统的代码有问题，需要在文件夹下，执行命令
//gcc a.c b.c c.c mainfunc.c && ./a.out
int count;//如果加上static，全局变量会改变为internal，作用域仅为mainfunc.c

int main(int argc, char const *argv[])
{
	/* code */
	a();
	b();
	c();
	b();
	printf("次数为：%d\n",count );
	return 0;
}