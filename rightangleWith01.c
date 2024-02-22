#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	printf("enter data:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			else
				printf("0");
		}
}
