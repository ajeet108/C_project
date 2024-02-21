#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,sum=0;
	puts("enter starting data:");
	scanf("%d",&j);
	puts("last data:");
	scanf("%d",&n);
	for(i=j;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("odd number: %d\n",i);
			sum+=i;
		}
		
	}
	printf("sum of odd number: %d\n",sum);
}

