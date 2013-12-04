#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *string;
int isEndOfStringReached;

int isDelimiter(char d,char *de)	{
	while(de!='\0')	{
		if(*de==d)	return 1;
		else	
					de++;
	}

	return 0;
}




char *mystrtok(char *str,const char *de)	{
	if(isEndOfStringReached==1) return (char*)NULL;
	
	if(str!=NULL)	{
		/* Copy the string for later use */
		string=(char*) malloc((strlen(str)+1) *sizeof(char));
		strcpy(string,str);
		/* Initialize the start variables*/
		isEndOfStringReached=0;
}

	while(isDelimiter(*string,de))  string++;

	if(


int main()	{
	char str[]="-This, is a sample string.";
	char *pch;
	printf("Splitting string \"%s\" into tokens:\n",str);
	pch = mystrtok (str," ,.-");
	while (pch != NULL)	{
        printf ("%s\n",pch);
	pch = mystrtok (NULL, " ,.-");
	}

	return 0;
}
