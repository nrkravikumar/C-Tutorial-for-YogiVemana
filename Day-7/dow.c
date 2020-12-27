//~ Forward of do-while

#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d%d",&i,&n);
	do
	{
		printf("%d, ",i);
		i++;
	}while(i>=n);
	return 0;
}


