#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int num=123;
	int *p=&num;
	int **pp=&p;

	printf("num :%d\n",num );
	printf("*p:%d\n",*p );
	printf("**pp:%d\n",**pp );
	printf("&p:%p,pp:%p\n",&p,pp);//指向p的指针的指针为pp,pp的位置是
	printf("&num:%p,p:%p,*pp:%p\n", &num,p,*pp);

	return 0;
}