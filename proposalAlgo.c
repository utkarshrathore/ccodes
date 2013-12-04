#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXNUM 4

int *m[MAXNUM],*w[MAXNUM];
int pairings[2*MAXNUM];

/* Returns the ID of an unpaired man else return -100 if no unpaired man exists*/
int isUnpaired()	{
	int i;
	for(i=1;i<2*MAXNUM;i+=2)	{
		if(pairings[i]==-1)
			return pairings[i-1];
	}

	return -100;
}

/*If women is engaged returns the ID of her partner else returns -100 if w is still unengaged*/
int isEngaged(int women)	{
	int i;
	for(i=1;i<2*MAXNUM;i+=2)	{
		if(pairings[i]==women)	
			return pairings[i-1];
	}
	return -100;
}

/* If women prefers partner 1 more than partner 2, function returns 1 else returns 0 */
int prefers(int women,int partner1, int partner2)	{
	int i;
	for(i=0;i<MAXNUM;i++)	{
		if(*(w[women]+i)==partner1)
			return 1;
		else
		
		if(*(w[women]+i)==partner2)
			return 0;
			
	}

	return -100;
}


int main()	{

int i,j;
for(i=0;i<MAXNUM;i++)	{
	m[i]=(int*) malloc(sizeof(int)*MAXNUM);
	w[i]=(int*) malloc(sizeof(int)*MAXNUM);
	
	printf("Enter pref for man[%d] ",i);
	for(j=0;j<MAXNUM;j++)	{
		scanf("%d",m[i]+j);
	}

	printf("Enter pref for women[%d] ",i);
	for(j=0;j<MAXNUM;j++)	{
		scanf("%d",w[i]+j);
	}
}

for(i=0;i<2*MAXNUM;i++)	{
	if(i%2==0)	
		pairings[i]=(i/2);
	else
		pairings[i]=-1;
}

int upid,partner,women;
while( (upid=isUnpaired()) >=0)	{
	women=*m[upid];
	m[upid]++;

	if( (partner=isEngaged(women)) >= 0)	{
		if(prefers(women,upid,partner))	{
			pairings[2*upid+1]=women;
			pairings[2*partner+1]=0;
		}
		else 
			continue;
	}

	else {
		pairings[2*upid+1]=women;
//		pairings[2*upid]=*women++;
	}
		
}

for(i=0;i<2*MAXNUM;i+=2)	{
	printf("Man[%d]-Women[%d]\n",(i/2),pairings[i+1]);
}


}









