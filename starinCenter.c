#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n;
	printf("enter data:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=n;j>0;j--)
		{
			(j>i)?printf(" "):printf("* ");
		}
	}
}
