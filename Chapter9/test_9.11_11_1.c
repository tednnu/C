#include <stdio.h>

int fib(int n);

int main()
{
	int i=0,n=0;
	printf("Please input a number:\n");
	scanf("%d",&n);
	fib(n);
	printf("%d\n",fib(n));
	return 0;
}

int fib(int n)
{
	if(n<=2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}