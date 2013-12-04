#include <stdio.h>

int main()
{
	    unsigned int num1 = 1000000000 ;
	    unsigned long num2 = 1000000000 ;
	    long long num3 = 100000000000LL ;
		long long num5=10000000000LL;
		/* The suffix LL makes the literal into type long long. 
		   C is not "smart" enough to conclude this from the type on the 
		   left, the type is a property of the literal itself, not the 
		   context in which it is being used.
		 */

		long long num4 = ~0 ;

	    printf("%u %u %u",(int)sizeof(num1),(int)sizeof(num2),(int)sizeof(num3)) ;
		printf("%d %ld %lld %llu %llu\n",num1,num2,num3,num4,num5) ;
		    return 0 ;
}

