#include<stdio.h>
int revers(int *num1);
int main()
{
	int num ;
	puts("enter data:");
	scanf("%d",&num);	
	printf("revers data:%d\n",revers(&num));
}
int revers(int *num1)
{
	int rev=0;
	while(*num1>0)
	{
		rev=(rev*10) +(*num1%10);
		*num1/=10;
	}
	return rev;
}
