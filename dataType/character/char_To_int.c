#include<stdio.h>
#include<stdlib.h>
int main()
{
	char var=50;
	printf("var=%c--------%d\n",var,var);
	puts("enter character:");
	var=getchar();
	printf("var=%c--------%d\n",var,var);
	var=getchar();
	printf("var=%c--------%d\n",var,var);
}
