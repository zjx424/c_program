//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//去掉不符合规则的
//利用continue可以减少循环次数
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	for (int i = 1; i <=4; ++i)
	{
		for (int j = 1; j <=4 ; ++j)
		{
			if (i==j) continue;
			for (int k = 1; k <=4 ; ++k)
			{
				if (i==k||j==k) continue;
				printf("%d%d%d\n",i,j,k );
			}
		}
	}
}