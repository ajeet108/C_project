#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num1,num2;
	printf(" enter the value of num1 and num2:\n");
	scanf("%d %d",&num1,&num2);
	if(num1==num2)
		printf("num1 %d and num2 %d equals \n",num1,num2);
	if(num1<num2)
		printf("num1 %d is less than num2 %d \n",num1,num2);
	if(num1>num2)
		printf("num1 %d is grater than num2 %d\n",num1,num2);
	if(num1!=num2)
		printf("num1 %d not equal to num2 %d\n",num1,num2);
	return 0;
}
