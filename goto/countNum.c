#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=1;
lable:	printf("%d\n",i);
	if(i<10)
	{
		i++;
		goto lable;
	}

}
