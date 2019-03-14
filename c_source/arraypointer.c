#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* int (*p2)[5] 数组指针
	数组指针是一个指针,它指向的是一个数组 */
	int temp[5]={1,2,3,4,5};
	int (*p2)[5]=&temp;//数组指针是一个指针,它指向的是一个数组
	int i;
	for (i=0;i<5;i++)
	{
		printf("%d\n",*(*p2+i));//(*p2+i)代表的是地址,*(*p2+i)代表的才是值
	}
	return 0;
}