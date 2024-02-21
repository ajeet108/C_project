#include <stdio.h>
int main()
{

	int num;

	puts(" enter number to check perfect number");
	scanf("%d",&num);

	printf(" enter num=%d\n",num);

	int i, sum = 0;

	for(i=1;i<num;i++)
	{
	  	if(num %i == 0)
	  	{
   			sum += i;
  		}
	}

	if(sum == num)
	puts(" given number is perfect number ");
	else
	puts(" given number is not a prefect number ");
}

