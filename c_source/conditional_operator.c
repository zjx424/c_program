#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*  
	�﷨: exp1?exp2:exp3;
	-exp1���������ʽ
	-������Ϊ��,����exp2
	-����ṹΪ��,����exp3
	*/
	int a,b;
	printf("please input two number ");
	scanf("%d %d",&a,&b);



	a>b?printf("a bigger than b\n"):printf("b bigger than a\n");
	return 0;
}