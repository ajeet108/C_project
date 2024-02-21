#include<stdio.h>
#include<stdlib.h>
void upperTolower(char ch);
int main()
{
	char uplwr;
	printf("enter alphabets:\n");
	scanf("%c",&uplwr);
	upperTolower(uplwr);

}
void upperTolower(char ch)
{
	if((ch>='a')&&(ch<='z'))
		printf("upper case %c\n",((int)ch)-32);
	
	else if ((ch>='A')&&(ch<=90))
		printf("lowe case %c\n",(int)ch+32);
	
	else
		printf("invalide case\n");	
}
