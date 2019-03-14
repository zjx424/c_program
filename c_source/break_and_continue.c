#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	break 和 continue都是中断当前循环,而不是整个循环
	while 和 continue连用时应当注意是否会出现死循环的现象
	
	break 中断所有循环
	continue 中断此次循环
	*/
	int a;
	for (a=1;a<=100;a++)
	{
		if (a==73)
		{
			continue;
		}
		printf("%d\n", a);
	}
	return 0;
}