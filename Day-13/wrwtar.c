//~ with return_type and without arguments
//~ Input: 4
		//~ 3 4 8 5
//~ Output: Sum of Even numbers is: 12

#include<stdio.h>
int SumEv()
{
	int n,i,m,sme=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m%2==0)
		{
			sme +=m;
		}
	}
	return sme;
}

int main()
{
	printf("Sum of Even numbers are: %d",SumEv());
	return 0;
}
