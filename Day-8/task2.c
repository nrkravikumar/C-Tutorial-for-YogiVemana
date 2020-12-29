//~ 2.Write a program to calculate the count of even numbers
	//~ Ex:
	//~ Input: 254678
	//~ Output: Count of even numbers in a given number 254678 is: 4

#include<stdio.h>

int main()
{
	int n,ec=0,h;
	scanf("%d",&n);
	h = n;
	while(n!=0)
	{
		if((n%10)%2 == 0)
		{
			ec++;
		}
		n = n/10;
	}
	printf("Count of even numbers in a given number %d is: %d",h,ec);
	return 0;
}
