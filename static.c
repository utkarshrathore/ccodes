#include<stdio.h>
void f1(int init)	{
	static int a;
	a=(init==0)? ++a:init;
	printf("\n%d,",a);
}

int main()	{
	f1(34);
	f1(0);
	f1(0);
	f1(0);
}
