//~ Check Whether a given number is Even or Odd
//~ Input: 20
//~ Output: 20 is Even number
//~ Input: 25
//~ Output: 25 is Odd Number

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is Even number",n);
	}
	else
	{
		printf("%d is Odd number",n);
	}
	return 0;
}
