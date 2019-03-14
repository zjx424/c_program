#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	char *p1[2]={"www.baidu.com","www.google.com"};
	int i;
	for (i=0;i<2;i++)
	{
		printf("%s\n",*p1[i] );
	}
	return 0;
}