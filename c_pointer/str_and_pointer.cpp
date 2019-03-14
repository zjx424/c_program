#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */

	char str[]={"www.baidu.com"};
	char *target =str;
	int count=0;
	//while (*str ++ != '\0')这个是不对的,
	//因为左值必须是可改变的,左值是str数组名,不能够改变
	
	//根据优先级 ++大于*, ++作用效果要等下一条语句实现再实现
	//指针变量可以是左值,数组名不能是左值
	while (*target ++ != '\0')
	{
		count++;
	}
	printf("%d\n",count );

	return 0;

}