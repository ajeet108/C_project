#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sum_of_sqr_of_evenNum()
{
	int num,num1,sum = 0;
	printf("enter number for sqr  even number below given number:\n");
	scanf("%d",&num1);	
	for(num=0;num<=num1;num++)
	{
		if(num%2==0)
			sum+=num*num;
	}
	return sum;
}
int main()
{
	printf("sum of sqr of even number :%d\n",sum_of_sqr_of_evenNum());
	printf("\n");
}
