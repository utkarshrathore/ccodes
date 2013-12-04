#include<stdio.h>
#include<limits.h>

//typedef long long ll

long long fib(long long n)	{
	if(n<=2)	
		return 1;
		else
		return fib(n-1)+fib(n-2);
}

int main()	{
	long long num;
	scanf("%lld",&num);
	long long res=fib(num);
	printf("%lld\n",res);
}
