//~ Infinity Loop in While

#include<stdio.h>

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	while(n != k)
	{
		printf("%d, ",n);
		n--;
	}
	return 0;
}
