#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,i,j,bit;
	printf("enter data:\n");
	scanf("%d",&data);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
	for(i=31,j=0; i>j; i--,j++)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data^=(1<<i);
			data^=(1<<j);
		}
	}
	printf("\n");
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
}
