#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* void 就是无类型,不能够定义变量 
	   void 指针我们把它称之为通用指针,就是可以指向任意类型的数据
	   也就是说,任何类型的指针都可以赋值给void
	   不要对void指针进行解引用
	*/
	int a=1024;
	int *pa=&a;
	char *ps="FishC";
	void *pv;

	pv=pa;
	printf("pa:%p,pv:%p\n",pa,pv);

	pv=ps;
	printf("ps:%p,pv:%p\n",ps,pv );

	return 0;
}