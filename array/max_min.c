#include<stdio.h>
#include<stdlib.h>
int MaxMin(int num1[5]);
int main()
{
	int num[5],i;
	printf("enter elements for checking for max and min:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	MaxMin(num);
}
int MaxMin(int num1[5])
{
	int max,min,i;
        max=min=num1[0];
	for(i=1;i<5;i++)
	{
		if(num1[i]>max)
		{
			max=num1[i];
		}
		if(num1[i]<min)
		{
			min=num1[i];
		}
	}
	printf("max is %d\n",max);
	printf("min is %d\n",min);
}
