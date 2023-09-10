#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0){
		printf("it is a positive number:\n");
	}
	else{
		printf("it is a negative number:\n");
	}
	return 0;
}