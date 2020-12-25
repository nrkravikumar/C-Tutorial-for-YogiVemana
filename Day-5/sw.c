//~ Switch Statement

#include<stdio.h>

int main()
{
	int n,p;
	scanf("%d",&n);
	printf("Enter Your choice: \n");
	scanf("%d",&p);
	switch(p)
	{
		case 2: printf("Selected 2nd choice and number is: %d",n);break;
		case 1: printf("Selected 1st choice and number is: %d",n);break;
		case 5: printf("Selected 5th choice and number is: %d",n);break;
		default:
			printf("Enter Valid Choice");
	}
	return 0;
}
