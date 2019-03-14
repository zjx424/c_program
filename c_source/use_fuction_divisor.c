#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 利用函数的方法来计算最大公倍数和最小公约数
		最大公倍数=m*n/最小公倍数
	*/
	int m,n,d,c;
	int divisor(int m,int n);
	printf("请输入m,n:");
	scanf("%d%d",&m,&n);
	d=divisor(m,n);
	c=(m*n)/d;
	printf("最大公约数是%d,最大公倍数是%d\n",d,c );
	return 0;
}

int divisor(int m,int n)
{
	int r;
	while ((r=m%n)!=0)//这里利用了辗转相除法
	{
		m=n;
		n=r;
	}
	return n;
}