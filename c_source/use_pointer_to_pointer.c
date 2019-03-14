#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* 指向指针的指针的应用 */
	char *web[]={
		"www.baidu.com",
		"www.google.com",
		"www.bilibili.com",
		"www.youtube.com"};

	char **search[2];
	char **video[2];
	int i;

	search[0]=&web[0];
	search[1]=&web[1];
	video[0]=&web[2];
	video[1]=&web[3];

	printf("the search web are :\n");
	for (i = 0; i < 2; ++i)
	{
		printf("%s\n",*search[i] );
	}

	printf("the video web are :\n");
	for (i = 0; i < 2; ++i)
	{
		printf("%s\n",*video[i] );
	}


	return 0;
}