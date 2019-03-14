#include <stdio.h>
void func(void);
void func(void)
{
	static int count=0;
	//这里使用static，count的值回保留，输出的不是0～9，而是全部都是0
	//这里只是改变了生存期，作用域并没有改变
	printf("count = %d\n",count );
	count++;
}
int main(int argc, char const *argv[])
{
	/* code */
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		func();
	}
	return 0;
}

