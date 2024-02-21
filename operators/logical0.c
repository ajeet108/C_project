#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*
	int a=2,b=0,c=-3,d;
	d=(a=b)&&(b=c);
	printf("%d %d %d %d\n",a,b,c,d);
	*/

    	int a = 2, b = 0, c = -3, d;
    	d = (a = b) || (b = c);
    	printf("%d %d %d %d\n", a, b, c, d);
    	return 0;
}
