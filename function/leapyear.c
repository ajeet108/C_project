#include<stdio.h>
#include<stdlib.h>
int leapyear()
{
	int year;
	if((year%4==0 && year%100 !=0)||(year%400==0))
			printf("leap year\n");
	else
		printf("not leap year\n");
}
int main()
{
	int year;
	printf(" enter year:\n");
	scanf("%d",&year);
	leapyear();
}
