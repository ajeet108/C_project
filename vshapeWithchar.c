#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,b,A;
	printf(" enter n value :");
	scanf("%d",&n);
	for(a=n;a>=0;a--,printf("\n"))
	{
		for(b=-n;b<=n;b++)
		{
			A=(b<0)?-b:b;
			a>A?printf(" "):printf("%c",(68-A));
		}
	}
	
}


