#include<stdio.h>

#define QUEUESIZE 4
int Q[QUEUESIZE];
int h=0,t=0;
int count=0;

void enqueue(x)	{
	if(count==QUEUESIZE)	
		printf("\nQueue Overflow while enqueing %d",x);
	else 	{
		Q[t]=x;
		t=(t+1)%QUEUESIZE;
		count++;
		printf("\n%d Enqueued",x);
	}
}
void dequeue()	{
	if(count==0)
		printf("\nQueue Underflow");
	else	{
		printf("\n%d Dequeued",Q[h]);
		h=(h+1)%QUEUESIZE;
		count--;
	}
}

void main()	{
	enqueue(3);
	enqueue(9);
	enqueue(5);
	enqueue(12);
    dequeue();
	dequeue();
	enqueue(23);
	enqueue(45);
	enqueue(454);
}


