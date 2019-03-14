#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* void指针我们把它称之为通用指针,就是可以指向任意类型的数据,
	也就是说,任何类型的指针都可以赋值给void指针 */
	int i=1024;
	int *pi=&i;
	char *ps="www.baidu.com";
	void *pv;

	pv=pi;
	printf("pi:%p,pv:%p\n",pi,pv );
	printf("*pv:%d\n",*(int *)pv );
	//再对void指针进行解引用的时候,需要写出类型转换,因为,void是属于无类型
	//int * 转换为整型指针
	//char * 转换为字符指针
	pv=ps;
	printf("ps:%p,pv:%p\n",ps,pv );
	//对字符进行解引用是不需要进行取值操作了
	printf("*pv:%s\n",(char *)pv );

	return 0;
}