#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 使用switch来对成绩进行估算 */

	char a;
	printf("please input your mark rank:");
	scanf("%c",&a);

	switch(a)
	{
		case 'A' : printf("your mark is over 90\n");break;
		case 'B' : printf("your mark is 80~90\n");break;
		case 'C' : printf("your mark is 70~80\n");break;
		case 'D' : printf("your mark is 60~70\n");break;
		case 'E' : printf("your mark is under 60\n");break;
		default:printf("please input right mark rank\n");break;
	}
	return 0;
}