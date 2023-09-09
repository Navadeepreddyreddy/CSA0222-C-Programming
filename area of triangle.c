#include<stdio.h>
int main()
    {
	int h,b;
	float area =0;
	printf("enter the value:");
	scanf("%d%d",&h,&b);
	area=0.5*h*b;
	printf("area of triangle is%f%f:",area,b,h);
	return 0;
}