#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int i;
	int sum;
	sum=0;
	for (i=1;i<=100;++i)
	{
		sum+=i;
	}
	printf("%d\n",sum );
	return 0;
}