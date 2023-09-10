#include<stdio.h>
int main()
{
	int i,n1,n2,temp;
	scanf("%d%d",&n1,&n2);
	 temp=n1;
	 n1=n2;
	 n2=temp;
	 printf("after swapping:%d\n",n1);
	 printf("after swapping:%d\n",n2);
	 return 0;
}