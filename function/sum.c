#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b); // function declaratio
int main()
{
	int x,y,z;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&x,&y);
	z=sum(x,y); // function call 
	printf("sum = %d\n",z);
}
int sum(int a, int b) // function definition
{
	int z;
	z=a+b;
	return z;
}

