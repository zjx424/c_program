#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	use goto
	goto不要使用
	*/
	int i=5;
	while (i++)
	{
		if (i>10)
		{
			goto A;
		}
	}
A: 	printf("here ,i=%d\n",i );
	return 0;
}