#include <stdio.h>
#include <stdlib.h>
//发展方向:堆和其他区段一样,都是从低地址向高地址发展
//栈则相反,是由高地址向低地址发展

int *func(void)
{
	int *ptr=NULL;
	ptr=(int *)malloc(sizeof(int));
	if (ptr==NULL)
	{
		exit(1);
	}
	*ptr=520;
	return ptr;
}

int main(int argc, char const *argv[])
{
	int *ptr=NULL;
	ptr=func();
	printf("%d\n",*ptr );
	free(ptr);
	return 0;
}