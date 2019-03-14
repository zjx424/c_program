#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*  
	++i 和 i++的区别
	*/
	int i=5,j;
	j=i++;//这里将i的值赋值给j,然后j++,实现j=5,然后自增1,j仍然是5
	printf("i=%d,j=%d\n",i,j );

	i=5;
	j=++i;//这里将i++ 即是6,赋值给j
	printf("i=%d,j=%d\n",i,j );
 
	return 0;
}