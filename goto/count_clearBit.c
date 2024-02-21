#include<stdio.h>
#include<stdlib.h>
int countClearbit(int *num);
int main()
{
	int data;
	puts("enter data:");
	scanf("%d",&data);
	countClearbit(&data);
}
int countClearbit(int *num)
{
	int bit=31,count=0;
lable:	if((*num&(1<<bit))==0)
	{
		count++;
	}
	bit--;
	if(bit>=0)
		goto lable;
	printf("count clear bits:%d\n",count);	
}
