#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int fm=1,flag=1;
	double item,sum=0;
	double esp;
	printf("please input esp:");
	scanf("%lf",&esp);

	while (1)
	{
		item=flag*1.0/fm;
		fm+=3;
		flag=-flag;
		sum+=item;
		if (fabs(1.0/fm)-fabs(1.0/(fm+3)<esp))
		{
			break;
		}
	}
	printf("sum is %lf\n",sum );


	return 0;
}