#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 
	使用do while 的优缺点:
	优点: 可以比while少一点语句,因为do-while 是先执行,后判断
	 	  单纯while的话可能会比较复杂,
	 	  实例:密码验证,直接验证密码是否正确,正确通过,不知却继续输入,属于do-while的类型
	缺点: 不够严谨

	使用是while 语句最后是以分号结尾
	*/
	int i=1;
	int sum=0;
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=100);
	printf("%d\n",sum );


	return 0;
}