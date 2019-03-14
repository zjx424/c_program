#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 0 1 2
	   3 4 5 */
	int array[2][3]={{0,1,2},{3,4,5}};
	int (*p)[3]=array;

	printf("**(p+1): %d\n",**(p+1));
	return 0;
}