#include<stdio.h>
#include<stdlib.h>
int swap(int *x, int *y)
{
	int  temp = 0;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
        int num1,num2;
        printf("enter the number for swapping:\n");
        scanf("%d %d",&num1,&num2);
        swap(&num1,&num2);
        printf(" After swapping number is %d and %d\n",num1,num2);
}

