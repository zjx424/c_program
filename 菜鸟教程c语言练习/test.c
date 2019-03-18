#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[40]={1,1};
	for (int i = 2; i < 40; ++i)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for (int i = 0; i < 40; ++i)
	{
		printf(" arr[%d] is  %d\n",i,arr[i] );
	}
	return 0;
}