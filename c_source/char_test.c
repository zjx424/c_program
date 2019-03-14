#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* C对应的ascii码是67 所以说char可以定义67,也可以定义'C'  
	需要注意的是"",和'',是不同的两个东西
	"" 表示字符串
	'' 表示单字符

	*/
	char a=67;

	printf("%c == %d\n", a,a);
	return 0;
}