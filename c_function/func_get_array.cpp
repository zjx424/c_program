#include <stdio.h>
void get_array(int a[10]);
void get_array(int a[10])
{	
	a[5]=520;
	for (int i = 0; i < 10; ++i)
	{
		printf("a[%d]=%d\n",i,a[i] );
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	get_array(a);
	printf("在main之中：\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("a[%d]=%d\n",i,a[i] );
	}
	/* 不能传递数组进函数 */
	return 0;
}
