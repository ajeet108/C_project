#include<stdio.h>
#include<stdlib.h>
int countCharacterBit(int *num);
int main()
{
	char ch;
	puts("enter character:");
	ch=getchar();
	int var;
	var=ch;
	countCharacterBit(&var);
}
int countCharacterBit(int *num)
{
	int count=0,count1=0,bit=8;
lable:	if(*num&(1<<bit))
	{
		puts(" 1 ");
		count++;
	}
	else
	{
		puts(" 0 ");
		count1++;
	}
	bit--;
	if(bit>=0)
	{
		goto lable;
	}
	printf("count setbit:%d\n",count);
	printf("count clear bit:%d\n",count1);

}
