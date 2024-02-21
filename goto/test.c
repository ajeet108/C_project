#include<stdio.h>
int main()
{
	int a,b;
	puts("enter two number:");
	scanf("%d%d",&a,&b);
	if(a&(1<<0) == b&(1<<0))
		printf("1\n");
	else
		printf("0\n");

}
