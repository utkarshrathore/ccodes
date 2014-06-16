#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *curr_pos,*mystr;
int endOfstringReached;

int isDelimiter(char c,const char *d)	{
	while(*d != c && *d!='\0') d++;

	if(*d=='\0') return 0; else return 1;
}

char *Strtok(char *str, const char* delimiters)	{

if(str==NULL && endOfstringReached==1) return NULL;

if(str!=NULL) { 
	
	mystr=(char*) malloc((strlen(str)+1)*sizeof(char));
	strcpy(mystr,str);
	curr_pos=mystr;
	endOfstringReached=0; 
} else {
	mystr=curr_pos;
}
	
while(isDelimiter(*mystr,delimiters)) {
	*mystr++;
}
	
if(*mystr=='\0') {
	endOfstringReached=1;
}

char *temp=mystr;

while(!isDelimiter(*temp,delimiters) && *temp!='\0') {
	temp++;
}

if(*temp=='\0') { 
	endOfstringReached=1;  
} else {
	*temp='\0';
}

if(temp!='\0') curr_pos=temp+1;

return mystr;
}

int main()	{
	char str[]="-This, is a sample string.";
	char *pch;
	printf("Splitting string \"%s\" into tokens:\n",str);
	pch = Strtok (str," ,.-");
	while (pch != NULL)	{
        printf ("%s\n",pch);
	pch = Strtok (NULL, " ,.-");
	}

	return 0;
}
