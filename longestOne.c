#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,longest=0,bit=31,count=0,count1=0;
	int res;
	puts("enter data:");
	scanf("%d",&data);
	while(bit>=0)
	{
		if(data&(1<<bit))
		{
			count++;
		}
		else
		{
			if(count>longest)
			{
				longest=count;
			}
			count=0;
		}
		bit--;
	}
	if(count>longest)
		printf("set bit sequence:%d\n",count);
	else
		printf("set bit sequence:%d\n",longest);
}
