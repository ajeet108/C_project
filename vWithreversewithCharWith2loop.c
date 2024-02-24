#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,b,A,B,i=0;
	printf("enter v value:");
	scanf("%d",&n);
	for(a=0;a<=n;a++,printf("\n"))
	{
		A=(a<n)?a:(n-(++i));
		for(b=-n;b<=n;b++)
		{
			B=(b<0)?-b:b;
			A>B?printf(" "):printf("*");
		}
	}
}
