//~ Continue example

#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==5 || i%5==0)
		{
			continue;
		}
		printf("%d,",i);
	}
	return 0;
}
