#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	printf("enter num value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
		for(j=1;j<=i;j++)
			printf("%d",j);
}
