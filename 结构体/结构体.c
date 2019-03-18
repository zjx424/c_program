//定义结构体类型变量 struct 结构体名称 结构体变量名
//结构体的size 并不是普通的相加，而是通过对齐来进行计算
//可以通过挑战结构变量的位置，来达到节省内存的目的
#include <stdio.h>
struct Book
{
	char title[128];  
	char author[48];
	float price;
	unsigned int date;
	char publisher[40];
} ;

//book属于全局变量
int main(int argc, char const *argv[])
{
	//只初始化某个值
	//struct Book book1={.price =48.8};
	  
	printf("%.1f\n",book1.price );
	return 0;
}