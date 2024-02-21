#include<stdio.h>
#include<stdlib.h>
int DecimalToBinary(int x);
int main()
{
	int num;
	printf("enter decimal number for converting into binary:\n");
	scanf("%d",&num);
	DecimalToBinary(num);
	printf("\n");
	return 0;
}
int DecimalToBinary(int x)
{
	int n,a = 0,i=0,j,arr[32]={0};

	while(x>0)
	{
		arr[i++]=x%2;
		x=x/2;
	}
	/*
	for(j=i-1;j>=0;j--)
	{
		
		printf("%d",arr[j]);
	}*/
	printf("%d",arr[i]);
	
}
