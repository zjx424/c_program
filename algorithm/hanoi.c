#include <stdio.h>

//汉诺塔 hanoi
/*
算法：
将前n-1个盘子从X移动到Y上
将最底下的第n个盘子从X移动到Z上
将Y上n-1个盘子借助X移动到Z上
*/
void hanoi(int n,char x ,char y,char z)
{
	if (n==1)
	{
		printf("%c --> %c\n",x,z );//将最底下的第n个盘子从X移动到Z上
	}
	else 
	{
		hanoi(n-1,x,z,y);//将前n-1个盘子借助Z，从X移动到Y上
		printf("%c --> %c \n",x,z );//将最底下的第n个盘子从X移动到Z上
		hanoi(n-1,y,x,z);//将Y上n-1个盘子借助X移动到Z上
	}
}


int main(int argc, char const *argv[])
{
	int n;
	printf("请输入汉诺塔的层数：");
	scanf("%d",&n);
	hanoi(n,'X','Y','Z');
	return 0;
}