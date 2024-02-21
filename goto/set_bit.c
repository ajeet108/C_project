#include<stdio.h>
#include<stdlib.h>
int setbit(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	setbit(&data);
}
int setbit(int *num)
{
	int bit,res;
	printf("enter bit position:");
	scanf("%d",&bit);
	res=(*num | (1<<bit));
	printf("set bit of bit position is :%d\n",res);
}
