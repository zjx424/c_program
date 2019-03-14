#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 要避免访问未初始化的指针 */
	int *a;//这个就是野指针
	*a=123;

	return 0;
}