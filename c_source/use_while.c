#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i=1;
	int sum=0;
	while (i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}

