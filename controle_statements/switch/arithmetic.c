#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 12, num2 = 3;
	char  op;
	printf("enter arithmetic operator ::\n");
	scanf("%c",&op);
	switch(op)
	{
	//	default:
	//		printf(" enter valid operator\n");
	//		break;
		case '+':
			printf(" sum :%d\n",num1+num2);
			break;
		case '-':
			printf(" subt :%d\n",num1-num2);
			break;
		case'*':
			printf(" mult :%d\n",num1*num2);
			break;
		case'/':
			printf(" div :%d\n",num1/num2);
			break;
		case'%':
			printf(" mod :%d\n",num1%num2);
			break;
		default:
			printf(" invalid operator\n");
	}
}
