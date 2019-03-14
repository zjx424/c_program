#include <stdio.h>
int sum(int n);

int sum(int n)
{
	int i=1,result=0;
	for (i=1;i<=n;i++)
	{
		result+=i;
	}
	return result;
}


int main(int argc, char const *argv[])
{
	/* code */
	int n,result;
	printf("please input n:");
	scanf("%d",&n);
	result=sum(n);
	printf("result is :%d\n",result );
	return 0;
}
