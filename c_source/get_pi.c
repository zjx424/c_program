#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	/* 利用格里高利公式求π的近似值,要求精确到最后一项的绝对值小于10^-4
	   公式:π/4=1-1/3+1/5-1/7.....
	*/
	double item,pi;
	int flag,fm;
	flag=1;item=1.0;pi=0;fm=1;
	while (fabs(item)>=0.0001)
	{
		item=flag*1.0/fm;
		pi=pi+item;
		
		
		fm+=2;
		flag=-flag;
	}
	pi=pi*4;
	printf("pi=%f\n",pi );

	return 0;
}