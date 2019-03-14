#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 判断素数:素数是指大于1的自然数中,除了1和此数自身外,无法被其他自然数整除的数 */
	int num;

	bool flag=1;
	printf("please input a number:");
	scanf("%d",&num);
	for (int i=2; i<num/2; i++)
	{
		if (num%i==0)
		{
			flag=0;
			break;
		}
		
	}
	if (flag==1)
	{
		printf("%d is a sushu\n",num);
	}
	else
	{
		printf("%d is not a sushu\n",num );
	}


	return 0;
}