//~ 1.Write a program to calculate sum of a number.
	//~ Ex: 
	//~ Input: 345
	//~ Output: sum of a given number 345 is: 12

#include<stdio.h>

int main()
{
	int n,s=0,k;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		s = s+n%10;
		n = n/10;
	}
	printf("Sum of Given number %d is: %d",k,s);
	return 0;
}
