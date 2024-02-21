#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int n);
int main()
{
	int num;
	printf("enter number for checking is this prime or not:\n");
	scanf("%d",&num);
	if(isPrime(num) )
		printf(" given number is prime ::\n");
	else
		printf(" given number is not prime::\n");
}
int isPrime(int n)
{
	int i,flag=0,a;
	a=n/2;
	for(i=2;i<=a;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}
