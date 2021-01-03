//~ Sample function

#include<stdio.h>
//~ void printvalue(int k); //Function Prototype

void printvalue(int k)
{
	printf("Entered Value is: %d",k);
}

int main()
{
	int n;
	scanf("%d",&n);
	printvalue(n);
	return 0;
}


