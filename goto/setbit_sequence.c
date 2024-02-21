#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,longest=0,bit=31,count=0,count1=0;
	int res;
	puts("enter data:");
	scanf("%d",&data);
test:	if(data &(1<<bit))
	{
		count++;
		if(data &(1<<(bit-1)))
		{
			//printf("count=%d\n",count++);
			count++;
			bit--;
		}
	
		count++;
		if(count>longest)
		{
			longest=count;
		}
	}
lable:	bit--;
	if(bit>=0)
	{
		goto test;
	}
	//printf("count:%d\n",count);
	printf("set bit sequence:%d\n",longest);
	//printf("count1=%d\n",count1++);
}






