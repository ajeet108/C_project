#include<stdio.h>
#include<stdlib.h>
int toggel(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	toggel(&data);
}
int toggel(int *num)
{
	int bit,res;
	puts("enter bit position:");
	scanf("%d",&bit);
	res=(*num ^ (1<<bit));
	printf("toggel data:%d\n",res);
}
