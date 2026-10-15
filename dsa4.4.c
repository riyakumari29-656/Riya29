#include<stdio.h>
int power(int x,int n)
{
	if(n==0)
	return 1;
	else
	return x*power(x,n-1);
}
int main()
{
	int x,n;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of n");
	scanf("%d",&n);
	printf("%d%d=%d",x,n,power(x,n));
	return 0;
}
