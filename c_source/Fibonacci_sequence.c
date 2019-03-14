#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i=1,j=1;
	int k;
	while (i<10000000)
	{
		k=i+j;
		i=j;
		j=k;
		printf("%d\n",j );

	}

	return 0;
}