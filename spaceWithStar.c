#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n;
	printf("enter num:\n");
	scanf("%d",&n);
	for(i=5;i>0;i--,printf("\n"))
	{
		for(j=1;j<=(n-i);j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
	}
}
