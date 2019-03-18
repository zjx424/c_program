#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,count=0,sum=0;
	printf("please input n :");
	scanf("%d",&n);
	printf("strat input int number:");
	for (int i = 0; i < n+1; ++i)
	{
		scanf("%d",&i);
		if (i%2==0)
		{
			count++;
			sum+=i;
		}
	}
	printf("number of odd int is %d,sum is %d\n",count,sum );
	return 0;
}
