#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s[20];
	for (int i=0;i<=10;i++)
	{
		s[i]=getchar();
	}
	printf("%s\n", s);


	return 0;
}