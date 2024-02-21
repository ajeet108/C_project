#include<stdio.h>
#include<stdlib.h>
int pair(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	pair(&data);
}
int pair(int *num)
{
	int bit=31,count_pair=0,count_pair1=0;
lable:	if(*num & (1<<bit))
	{
		if(*num & (1<<(bit-1)))
		{
			count_pair++;
			bit--;
		}	
	}
	else 
	{
		if(!(*num & (1<<(bit-1))))
		{
			count_pair1++;
			bit--;
		}
	}
	bit--;
	if(bit>0)
	{
		goto lable;
	}
	printf("count set bit pair:%d\n",count_pair);
	printf("count clear bit pair:%d\n",count_pair1);

}
