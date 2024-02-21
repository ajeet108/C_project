#include<stdio.h>
#include<stdlib.h>
int prime_num()
{
	int i,n,flag=0;
	printf(" enter number:\n");
	scanf("%d",&n);	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf(" not prime\n");
			flag =1;
			break;
		}
	}
	if(flag==0)
		printf(" prime\n");
	
	return 0;
}
int main()
{
	prime_num();
}

