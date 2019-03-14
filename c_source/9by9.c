#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int i,j;
	for (i=1; i <= 9 ; i++)
	{
		/* code */
		for (j=1; j<=i; j++)
		{
			/* code */
			printf("%d * %d = %-2d  ",i,j,i*j );
		}
		putchar('\n');
	}
	return 0;
}