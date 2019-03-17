#include <stdio.h>
//加上inline就是内联函数
//内联函数的优点就是避免宏定义的缺点
//这样操作效率会比较高
//内联函数虽然节省了函数调用的时间消耗,但由于每一个函数出现的地方都要进行替换
//因此增加了代码编译的时间,另外,并不是所有的函数都能够变成内联函数的

inline int square(int x)
{
	return x*x;
}

int main(int argc, char const *argv[])
{
	int i=1;
	while (i<=100)
	{
		printf("%d 的平方是 %d\n",i-1,square(i++ ) );
	}
	return 0;
}