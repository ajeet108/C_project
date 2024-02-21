#include<stdio.h>
#include<stdlib.h>
int countSetbit(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	countSetbit(&data);
}
int countSetbit(int *num)
{
	int bit=31,count=0;
lable:	if(*num&(1<<bit))
	{
		count++;
	}
	bit--;
	if(bit>=0)
		goto lable;
	printf("count setbit :%d\n",count);
}
