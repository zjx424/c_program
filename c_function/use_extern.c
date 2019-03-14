#include <stdio.h>
void func();
void func()
{
	extern count;
	count++;
}
int count =0;
int main(int argc, char const *argv[])
{
	       /*      extern关键字
	用extern关键字告诉编译器，这个变量我在后边定义 */

	func();
	printf("%d\n",count );
	return 0;
}