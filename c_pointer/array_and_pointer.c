#include <stdio.h>
int main()
{
	/* 数组绝不是指针,只不过两者之间有非常密切的联系 */
	char str[]={"www.baidu.com"};
	//这里接受字符串的时候不需要使用&,字符串就是一个数组
	//数组名就是一个地址信息,数组名就是数组的第一个元素的地址
	//str就是一个指针,它指向str[0] ,即str==&str[0]

	printf("域名为: %s\n",str);
	printf("*str 的值为%c\n",*str); //这里:str是数组第一个元素的地址,*str即是第一个元素的地址所对应的元素,是字符'w'


	//下面两句是查看str是否指向第一个元素的地址
	printf("str 的值为%p\n",str); 
	printf("str的第一个元素的地址为:(&str[0]) %p\n",&str[0]);

	//指针的运算:
	/* 
	 **当指针指向数组元素的时候** ,我们可以对指针变量进行加减运算,这样做的
	意义相当于指向距离指针所在位置向前或向后的第n个元素
	*/
	printf("str [1]的地址为%p\n",str+1); 
	printf("str的第二个元素的地址为:(&str[1]) %p\n",&str[1]);
	return 0;
	

}

