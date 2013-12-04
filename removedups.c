#include<stdio.h>

int a[]={1,1,2,2,3,3,4,5,6,7,7,7,8,8,9,9,9,9,9,10,11,12,13,13,13};


int removedups(int size)	{
	int p1=0,p2=1;
	while(p2<size)	{
		while(a[p1]==a[p2])	{
			if(p2<=size)	p2++;
		}
	a[++p1]=a[p2];
	}

	return p1;
}

int main()	{
	int newsize=removedups(25);
	int i;
	for( i=0;i<newsize;i++)	{
		printf("%d,",a[i]);
	}

	printf("\n");
}
