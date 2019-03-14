#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i;
	printf("please input number:");
	scanf("%d",&n);

	char a[n+1];
	printf("plese input chars:");
	getchar();
	for (i=0;i<n;i++)
	{
		scanf("%c",&a[i]);

	}
	a[n]='\0';//a[17]为'\0',即是最后一位了
	printf("the string is : %s\n", a);

	return 0;
}