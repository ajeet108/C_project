#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial( int n);
int main()
{
	int num;
	printf("enter the number for factorial:\n");
	scanf("%d",&num);
	printf("factorial of given number: %d \n",factorial(num));
	return 0;
}

int factorial(int n)
{
	int i,fact = 1;
	for(i=n;i>=1;--i)
	{	
		fact=fact*i;
	}
	
	
}
