#include<stdio.h>
#include<stdlib.h>

#define suqare(x) (x * x)
int main()
{
	int num,res;
	printf(" enter number::\n");
	scanf("%d",&num);
	res=suqare(num);
	printf("res::%d\n",res);
	return 0;
}
