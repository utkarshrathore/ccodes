#include<stdio.h>
#include<stdlib.h>
#define NUM_NODES 4

struct node;
typedef struct node* Node;

struct node{
	int a;
	Node next;
};


main()	{

	Node curr,head,temp;

	head=(Node) malloc(sizeof(struct node));
	head->a=0;

	curr=head;

	int c;
	for(c=1;c<NUM_NODES;c++)	{
		Node temp=(Node) malloc(sizeof(struct node));
		temp->a=c;
		curr->next=temp;
		curr=temp;
}
curr->next=NULL;

//print
temp=head;
while(temp!=NULL)	{
	printf("%d:",temp->a);
	temp=temp->next;
}

printf("\n");
}
