#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=123;
	int *pa=&a;
	printf("the a is %d\n",a );
	printf("use the pointer the a is %d\n",*pa );
	printf("the pointer of a is %p\n",pa );

	return 0;
}