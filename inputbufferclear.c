#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	do
	{
		printf("enter character:(# to stop loop):\n");
		scanf("%c",&ch);
		while(getchar() != '\n');
		printf("you supplied :%c\n",ch);
	}while(ch !='#');
	printf("bye..\n");
}
