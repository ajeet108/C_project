#include<stdio.h>
#include<stdlib.h>
int oddeven(int *x);
int main()
{
	int a;
	puts("enter data:");
	scanf("%d",&a);
	oddeven(&a);
}
int oddeven(int *x)
{ int y;
	if(y%2==0)
		printf("even\n");
	else
		puts("odd:");
}

