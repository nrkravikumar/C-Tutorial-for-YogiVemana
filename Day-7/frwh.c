//~ Forwarding of While

#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d%d",&i,&n);
	while(i<=n)
	{
		printf("%d, ",i);
		i++;
	}
	return 0;
}
