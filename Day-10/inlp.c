//~ Inner Loop for printing numbers

#include<stdio.h>

int main()
{
	int n,i,j,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%03d ",s);
			s++;
		}
		printf("\n");
	}
	return 0;
}
