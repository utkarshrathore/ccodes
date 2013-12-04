#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void DoPermute(char in[],char out[],int used[],int length, int recurLen)	{
	int i;

	if(recurLen == length)	{
		printf("%s\n",out);
		return;
	}

	for(i=0;i<length;i++)	{
		if(used[i])
			continue;

		out[recurLen]=in[i];
		used[i]=1;
		DoPermute(in,out,used,length,recurLen+1);
		used[i]=0;
	}
}

int Permute(char inString[])	{
	int length,i,*used;
	char *out;

	length=strlen(inString);
	out=(char*) malloc(length+1);
	if(!out)	
		return 0;
	
	out[length]='\0';
	used=(int*) malloc(sizeof(int)*length);
	if(!used)	
		return 0;

	for(i=0;i<length;i++)	
			used[i]=0;
	
	DoPermute(inString,out,used,length,0);

	free(out);
	free(used);
	return 1;
}

int main()	{
	char s[]="ABCD";
	Permute(s);
}
