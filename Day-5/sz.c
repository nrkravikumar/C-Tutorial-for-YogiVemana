#include<stdio.h>

int main()
{
	char s[20] = "Rajesh Kumar";
	printf("Size of integer is: %d\n",sizeof(int));
	printf("Size of short integer is: %d\n",sizeof(short int));
	printf("Size of long integer is: %d\n",sizeof(long int));
	printf("Size of float is: %d\n",sizeof(float));
	printf("Size of double is: %d\n",sizeof(double));
	printf("Size of Character is: %d\n",sizeof(char));
	printf("Size of String for given string is: %d\n",sizeof(s));
	printf("Size of unsigned long long integer is: %d\n",sizeof(unsigned long long int));
	printf("Size of long long double is: %d",sizeof(long long double));
	return 0;
}
