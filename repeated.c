#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,i,j;
	printf("enter data:\n");
	scanf("%d",&data);
	for(i=1;i<=data;i++,printf("\n"))
		for(j=1;j<=data;j++)
			printf("%d",i);
}
