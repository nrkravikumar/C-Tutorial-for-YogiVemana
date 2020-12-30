//~ 3.Write a program to calculate the sum of left half digits in a number
	//~ Ex:
	//~ Input: 345678
	//~ Output: Given number is 345678 and its left half sum is: 12
	
	//~ Input: 45679
	//~ Output: Given number is 45679 and its left half sum is: 9

#include<stdio.h>

int main()
{
	int n,r,c=0,z=0,t=0,y;
	scanf("%d",&n);
	y = n;
	while(n!=0)
	{
		r = r*10+n%10;
		n = n/10;
		c++;
	}
	//~ printf("Reverse number is: %d and count is: %d\n",r,c);
	while(r!=0)
	{
		if(z >(c%2==0)+1)
		{
			break;
		}
		t = t+r%10;
		r = r/10;
		z++;
	}
	printf("Given number is %d and its left half sum is:%d",y,t);
	return 0;
}
