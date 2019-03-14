#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[100]={0};
	// printf("%d\n",a[2] );
	int i;
	for (i=1;i<=100;i++)
	{
		a[i]=i;
	}
	printf("%d\n",a[0] );

	return 0;
}
	