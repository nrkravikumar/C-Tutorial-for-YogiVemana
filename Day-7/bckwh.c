//~ Backward of While

#include<stdio.h>

int main()
{
	int st,en;
	scanf("%d%d",&st,&en);
	while(en>=st)
	{
		printf("%d, ",en);
		en--;
	}
	return 0;
}
