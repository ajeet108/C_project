#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	puts("enter starting data:");
	scanf("%d",&j);
	puts("enter last data:");
	scanf("%d",&n);
	i=j;
	while(i<n)
	{
		if(i%2==0)
		{
			printf("even number in range:%d\n",i);
			sum+=i;
		}
		i++;

	}
	printf("sum of even no in range:%d\n",sum);
}
