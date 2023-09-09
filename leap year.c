#include<stdio.h>
int main()
{
	int n;
	printf("enter the year:\n");
	scanf("%d",&n);
	if(n%4==0 )
		printf("it is leap year:");

	else if (n%400==0)
	printf("it is leap year:");
	else
		printf("it is not a leap year:");
	return 0;
}