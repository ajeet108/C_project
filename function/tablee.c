#include<stdio.h>
#include<stdlib.h>
int multi_table()
{
	int i=1,j=1;
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<=5;j++)
		{
			printf("%d ",i*j);
		}
		printf("\n");
	}
}
int main()
{
	multi_table();
}
