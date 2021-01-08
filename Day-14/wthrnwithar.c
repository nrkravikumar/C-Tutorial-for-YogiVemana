//~ without return_type and without arguments
//~ Input: 4
	//~ 3 8 5 4
//~ Output:Sum of Even numbers is:12

#include<stdio.h>

void SumEn()
{
	int n,i,m,p=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m%2==0)
		{
			p+=m;
		}
	}
	printf("Sum of Even numbers is: %d",p);
}

int main()
{
	SumEn();
	return 0;
}
