#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	short int i=20;
	char c=97;
	printf("%ld %ld %ld\n",sizeof(i),sizeof(c),sizeof(c+i));
}
