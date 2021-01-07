//~ with return_type and with arguments
//~ Sum of even numbers from a given input
//~ Input: 4
		//~ 3 4 8 5
//~ Output: Sum of even numbers are: 12

#include<stdio.h>

int SumofEvn(int p)
{
	if(p%2==0)
	{
		return p;
	}
	return 0;
}

int main()
{
	int n,m,i,d=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		d = d+SumofEvn(m);
	}
	printf("Sum of Even Numbers are: %d ",d);
	return 0;
}

