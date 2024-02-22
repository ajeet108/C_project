#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
       do
       {
	       printf("enter a char:(# to stop loop):");
	       scanf("%c",&ch);
	       printf("you supplied:%c\n",ch);
       }while(ch!='#');
	printf("bye ------\n");       
}
