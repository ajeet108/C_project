#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,res,rev=0;
	puts("enter data:");
	scanf("%d",&data);
lable:	res=data%10;
	printf("res:%d\n",res);
	rev=rev*10+res;
	data/=10;
	if(data>0)
	{
		goto lable;
	}
	printf("revers data:%d\n",rev);
}
