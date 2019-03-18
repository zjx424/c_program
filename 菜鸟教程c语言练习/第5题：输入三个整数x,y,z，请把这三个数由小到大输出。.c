//输入三个整数x,y,z，请把这三个数由小到大输出。
#include <stdio.h>
 
int main()
{
    int x,y,z,t;
    printf("\n请输入三个数字:");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) { /*交换x,y的值*/
        t=x;x=y;y=t;
    }
    if(x>z) { /*交换x,z的值*/
        t=z;z=x;x=t;
    }
    if(y>z) { /*交换z,y的值*/
        t=y;y=z;z=t;
    }
    printf("从小到大排序: %d %d %d\n",x,y,z);
}