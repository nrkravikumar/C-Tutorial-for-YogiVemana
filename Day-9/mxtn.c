//~ 1.Check maximum value of 2 numbers

#include<stdio.h>

int main()
{
	int n,m;
	printf("Input First Number: ");
	scanf("%d",&n);
	printf("Input Second Number: ");
	scanf("%d",&m);
	//~ if(n>m)
	//~ {
		//~ printf("Maximum: %d",n);
	//~ }
	//~ else
	//~ {
		//~ printf("Maximum: %d",m);
	//~ }
	//~ ? True : False
	((n>m)?printf("Maximum: %d",n):printf("Maximum: %d",m)); 
	return 0;
}
