//Print pattern for 2^i * 3^j * 5^k

#include<stdio.h>
#define RANGE 10000
int main()	{
	int i,temp;
	printf("\n1");
	for(i=2;i<=RANGE;i++)	{
		temp=i;
		while(temp%2==0)	
			temp=temp/2;
		while(temp%3==0)
			temp=temp/3;
		while(temp%5==0)
			temp=temp/5;
	if(temp==1)
		printf("\n%d",i);
	}
}
