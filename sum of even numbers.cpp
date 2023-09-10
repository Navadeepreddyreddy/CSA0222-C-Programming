#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i+=2){
		sum+=i;
	}
	printf("sum of series:%d",sum);
	return 0;
}