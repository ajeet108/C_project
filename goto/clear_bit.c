#include<stdio.h>
#include<stdlib.h>
int clearbit(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	clearbit(&data);
}
int clearbit(int *num)
{
	int bit,res;
	puts("enter bit position:");
	scanf("%d",&bit);
	res= (*num &(~(1<<bit)));
	printf("clear bit :%d\n",res);
}
