#include <stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)//定义传入的是指针
{
	int temp;
	printf("IN swap,before swap:x=%d,y=%d\n",*x,*y);
	temp=*x;
	*x=*y;
	*y=temp;
	printf("IN swap,after swap:x=%d,y=%d\n",*x,*y);	
}
int main(int argc, char const *argv[])
{
	/* code */
	int x=3,y=5;
	int *pa=&x;
	int *pb=&y;
	printf("IN main,before swap:x=%d,y=%d\n",x,y);
	swap(pa,pb);
	//因为swap函数里存放的是指针变量,而指针又是指向一个地址
	//所以可以直接利用&x,&y,代表各自的指针传进去
	printf("IN main,after swap:x=%d,y=%d\n",x,y);
	return 0;
	//大体的含意就是:A,B班有两个小红,两个小红在不同的班级,你叫小红,都有各自的
	//小红答应,但是当两个小红同在一班,你叫小红就会发生混淆
	//解决方法:那个坐在第一排的小红,那个坐在第二排的小红,指针的精髓
}
