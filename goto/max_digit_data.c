#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,res,max=0,min=0;
	puts("enter data:");
	scanf("%d",&data);
test:	res=data % 10;
	if(res>max)
	{
		max=res;
	}
	data/=10;
	if(data>0)
	{
		goto test;
	}
	printf("max=%d\n",max);

}
