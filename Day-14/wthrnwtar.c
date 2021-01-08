//~ without return_type and with arguments
//~ Input: 4
		//~ 3 8 5 4  
//~ Output:Sum of Even numbers is: 12

#include<stdio.h>

void SumE(int y)
{
	int i,r,s=0;
	for(i=1;i<=y;i++)
	{
		scanf("%d",&r);
		if(r%2==0)
		{
			s+=r;
		}
	}
	printf("Sum of Even numbers is: %d",s); 
}

int main()
{
	int n;
	scanf("%d",&n);
	SumE(n);
	return 0;
}
