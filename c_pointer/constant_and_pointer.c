#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	指向常量的指针
	指针可以修改为指向不同的常量
	指针可以修改为指向不同的变量
	可以通过解引用来读取指针指向的数据
	不可以通过解引用修改指针指向的数据


	常量指针
	指向非常量的常量指针
	指针自身不可以被修改
	指针指向的值可以被修改
	*/
	int num=520;
	const int cnum=880;
	const int *pc=&cnum;

	printf("cnum :%d,&cnum: %p\n",cnum,&cnum);
	printf("*pc :%d,pc :%p\n",*pc, pc);

	pc=&num;
	printf("num :%d,&num: %p\n",num,&num);
	printf("*pc :%d,pc :%p\n",*pc, pc);


	return 0;
}