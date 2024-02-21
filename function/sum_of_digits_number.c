#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sum_of_digits(int x);
int main()
{
	int num;
	printf(" enter number for adding digitd of number:\n");
	scanf("%d",&num);
	printf("sum of digits of given number is %d\n",sum_of_digits(num));
}
int sum_of_digits(int x)
{
	int sum = 0;
	while(x>0)
	{
		sum += x%10;
		x/=10;
	}
	return sum;
}
