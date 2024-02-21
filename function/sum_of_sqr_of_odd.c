#include<stdio.h>
#include<stdlib.h>
int sum_of_sqr_oddNum(void)
{
	int i,sum=0,num;
	printf("enter number for sqr odd number below given number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
			sum+=i*i;
	}
	return sum;
}
int main()
{
	printf(" sum of sqr of  odd number:%d \n",sum_of_sqr_oddNum());
	printf("\n");
}
