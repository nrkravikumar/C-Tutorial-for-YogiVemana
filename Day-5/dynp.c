#include<stdio.h>

int main()
{
	int a,b;
	float g;
	printf("Enter a and b values: ");
	scanf("%d%d",&a,&b);
	printf("Enter g value: ");
	scanf("%f",&g);
	printf("Sum of %d,%d and %f is: %d",a,b,g,(int)(a+b+g));
	return 0;
}
