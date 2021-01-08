//~ Input: 234567
//~ Output: sum of left half even number is: 6

#include<stdio.h>
int rv(int u)
{
	int r=0;
	while(u!=0)
	{
		r = r*10+u%10;
		u = u/10;
	}
	return r;
}

int lgt(int w)
{
	int y;
	while(w!=0)
	{
		w = w/10;
		y++;
	}
	return y;
}

int LftEvSm(int rev,int s)
{
	int c=0,y=0,h;
	while(rev!=0)
	{
		if(c > (s%2==0)+1)
		{
			break;
		}
		else
		{
			h = rev%10;
			if(h%2==0)
			{
				y = y+h;
			}
		}
		rev = rev/10;
		c++;
	}
	return y;
} 

int main()
{
	int n,tr,e,le;
	scanf("%d",&n);
	e = rv(n);
	printf("Reverse number is: %d\n",e);
	le = lgt(n);
	printf("Length of number is: %d\n",le);
	tr = LftEvSm(e,le);
	//~ tr = LftEvSm(rv(n),lgt(n));
	printf("Sum of Left half even number is: %d",tr);
	return 0;
}
