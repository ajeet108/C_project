#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,A,b,B;
	printf("enter n value:");
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=-n;b<=n;b++)
		{
			B=(b<0)?-b:b;
			A>B?printf(" "):printf("*");
		}
	}
}
