//~ with return_type and with arguments
//~ Sum of even numbers from a given input
//~ Input: 4
		//~ 3 4 8 5
//~ Output: Sum of even numbers are: 12

#include<stdio.h>

int SumofEvn(int p)
{
	int i,m,sumev=0;
	for(i=1;i<=p;i++)
	{
		scanf("%d",&m);
		if(m%2==0)
		{
			sumev +=m;
		}
	}
	return sumev;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("Sum of Even Numbers are: %d ",SumofEvn(n));
	return 0;
}
