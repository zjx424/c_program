#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	double r,h,v;
	double volume(double r,double h);
	void display(double v);
	printf("输入半径和高度:");
	scanf("%lf%lf",&r,&h);
	v=volume(r,h);
	display(v);
	return 0;
}
double volume(double r,double h)
{
	double v;
	v=3.1416*r*r*h;
	return v;
}
void display(double v)
{
	printf("圆柱体的面积是 %.3f\n",v );
}