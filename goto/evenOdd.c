#include<stdio.h>
#include<stdlib.h>
int evenOdd(int *data);
int main()
{
	int num;
	puts("enter data:");
	scanf("%d",&num);
	evenOdd(&num);
}
int evenOdd(int *data)
{
	if(*data%2==0)
		goto even;
	else
		goto odd;
even:	printf("given number is even:\n");
	return 0;
odd:	printf("given number is odd:\n");
}
