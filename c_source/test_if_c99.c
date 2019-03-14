#include<stdio.h>
int main()
{
#if (!defined(__STDC__))
printf("not c99！");
#elif defined(__STDC_VERSION__)
printf("is c99：%ld。", __STDC_VERSION__);
#else
printf("old c99");
#endif
getchar();
return 0;
}