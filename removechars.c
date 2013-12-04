#include<stdio.h>

void removeChars(char str[],char remove[])	{
	char hash[256];
	int i, src, dest;
	for(i=0;i<256;i++)	
		hash[i]=0;
	
	i=0;
	while(remove[i]!='\0')	{
		hash[(int)remove[i]]++;
		i++;
	}
	

	src=0,dest=0;
	while(str[src]!='\0')	{
		if(!hash[(int)str[src]])	
			str[dest++]=str[src++];
		else 
			src++;
	}
	str[dest]='\0';
}

int main()	{
	char str[30]="My name is Rathore";
	removeChars(str,"yaet");
	printf("%s",str);
	printf("\n");
}
		
		

