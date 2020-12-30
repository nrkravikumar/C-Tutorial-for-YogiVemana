//~ 2.Check maximum of 3 numbers

#include<stdio.h>

int main()
{
	int n,m,p;
	printf("Input num1: ");
	scanf("%d",&n);
	printf("Input num2: ");
	scanf("%d",&m);
	printf("Input num3: ");
	scanf("%d",&p);
	//~ if((n>m) && (n>p))
	//~ {
		//~ printf("Maximum is: %d",n);
	//~ }
	//~ else if(m>p)
	//~ {
		//~ printf("Maximum is: %d",m);
	//~ }
	//~ else
	//~ {
		//~ printf("Maximum is: %d",p);
	//~ }
	
	(((n>m) && (n>p)) ? printf("Maximum is: %d",n) : (m>p) ? printf("Maximum is: %d",m) : printf("Maximum is:%d",p));
	return 0;
}
