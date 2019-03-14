#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 指向指针的指针的规律:
	i为整型
	p为指向i的指针
	pp为指向i的指针的指针
	i == *P
	p == &i;
	pp==&p
	**pp==i
	
	*pp==p==&i


	 */
	int i=124;
	int *p=&i;
	int **pp=&p;
	printf("*p :%d\n",*p);
	printf("**pp:%d\n",**pp);

	printf("&p: %p\n",&p );
	printf("pp: %p\n",pp);


	printf("&num: %p,p: %p,*pp: %p\n",&i,p,*pp );
	return 0;
}