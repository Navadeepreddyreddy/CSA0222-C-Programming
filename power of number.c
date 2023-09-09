#include<stdio.h>
int main()
{
	int base,exp;
	int result =1;
	printf("enter the base:\n");
	scanf("%d",&base);
	printf("enter the exp:\n");
	scanf("%d",&exp);
	while (exp !=0){
		result*=base;
		--exp;	
	}
	printf("result = %d",result);
	return 0;
}