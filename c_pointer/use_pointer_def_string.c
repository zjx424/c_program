#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* 使用指针来定义字符串 */
	//这里可以利用指针来定义一个字符串,而且操作和字符串一样
	char *str="www.baidu.com";
	int i,length;
	length=strlen(str);
	for (i=0;i<length;i++)
	{
		printf("%c\n", str[i]);
	}
	printf("\n");
	return 0;
}