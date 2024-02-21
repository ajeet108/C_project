#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num ;
	printf(" enter num for checking even or odd:\n");
	scanf("%d",&num);
	if(num%2 == 0)
		goto even;
	else
		goto odd;
even:
	printf(" given number is even:\n");

odd:
	printf(" given number is odd:\n");
}
