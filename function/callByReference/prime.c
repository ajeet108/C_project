#include<stdio.h>
int prime(int *num1);
int main()
{
	int num;
	puts("enter data:");
	scanf("%d",&num);
	prime(&num);
	//printf("prime number :%d\n",prime(&num));
}
int prime(int *num1)
{
	int i, pr,flag=0;
	//pr=(*num1/2);
	for(i=2;i<=*num1/2;i++)
	{
		if(*num1%i==0)
		{
			puts("not prime:");
			flag=1;
			break;
		}
	}
	if(flag==0)
		puts("prime:");
		return flag;
}
