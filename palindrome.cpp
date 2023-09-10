#include<stdio.h>
int main()
{
	int i,r,rev=0,n;
	scanf("%d",&n);
	i=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==i){
		printf("it is a palidrome;");
	}
	else{
	
	printf("it is not a palindrome:");
}
return 0;
}
