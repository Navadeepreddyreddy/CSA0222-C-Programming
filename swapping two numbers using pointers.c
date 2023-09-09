#include<stdio.h>
int main()
{
	int x,y,*a,*b,temp;
	printf("enter the value of x and y:");
	scanf("%d%d",&x,&y);
	printf("before swapping\nx=%d \ny=%d",x,y);
	a=&x;
	b=&y;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping\nx=%d \ny=%d",x,y);
	return 0;
}