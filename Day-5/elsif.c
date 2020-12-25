//~ else if Ladder

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==50)
	{
		printf("%d is Equal to 50",n);
	}
	else if(n%5==0)
	{
		printf("%d is divisible by 5",n);
	}
	else if(n%2==0)
	{
		printf("%d is even number",n);
	}
	else if(n%3==0)
	{
		printf("%d is divisible by 3",n);
	}
	else
	{
		printf("%d is Greater than 50",n);
	}
	return 0;
}
