#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i;
	int temp[5]={1,3,4,5,7};
	int (*p)[5]=&temp;
	//数组指针 指向数组的第一个元素,而不是temp数组名
	for (i=0;i<5;i++)
	{
		printf("%d\n",*(*p+i) ); 
		 //(*p+i)指的是地址,由上面的&temp
	}
	return 0;
}