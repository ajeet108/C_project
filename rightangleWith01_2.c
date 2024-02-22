#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,v=1;
	printf("enter num:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{	
		for(j=1;j<=i;j++)
		{
			printf("%d",v);
			v = !v;
		}
	}
	/*
	 * for(i=1;i<=n;i++)
	 * 	v=1;//if we v=1 here then something else solution
	 * 	for(j=1;j<=i;j++)
	 * 		v=1;//if we write v=1 here then get something else
	 * 		printf("%d",v);
	 * 		v = !v;
	 */ 		
}
