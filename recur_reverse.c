#include<stdio.h>
#include<string.h>

char str[]="Hello World";

void reverse(int pos)	{
	if(pos<(strlen(str)/2)) {
		char ch=str[pos];
		str[pos]=str[strlen(str)-pos-1];
		str[strlen(str)-pos-1]=ch;
		reverse(pos+1);
	}
}

int main()	{
	printf("%s\n",str);
	reverse(0);
	printf("\n%s\n",str);
}
