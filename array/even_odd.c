#include<stdio.h>
#include<stdlib.h>
int evenOdd(int evod);
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter array elements a[%d]:\n",i);
		scanf("%d",&a[i]);
		evenOdd(a[i]);
	}	
}
int evenOdd(int evod)
{
	if(evod%2==0)
		printf("given number is even\n");
	else
		printf("given number is odd\n");
}
