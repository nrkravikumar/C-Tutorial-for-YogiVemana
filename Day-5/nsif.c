//~ Nested if here else part is optional case
#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<=100)
	{
		if(n<=20)
		{
			if(n%5==0)
			{
				printf("%d is Divisible by 5",n);
			}
		}
	}
	return 0;
}
