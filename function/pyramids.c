#include<stdio.h>
#include<stdlib.h>
int pyramids()
{
	int i,j;
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	pyramids();
}
