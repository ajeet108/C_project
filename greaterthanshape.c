#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,A,n;
	printf("enter n value:\n");
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=n;b>=0;b--)
		{
			A<b?printf(" "):printf("*");
		}
	}
	/*
	 * 	****
	 * 	 ***
	 * 	  **
	 * 	   *
	 * 	  **
	 * 	 ***
	 * 	****
	 */	  
}
