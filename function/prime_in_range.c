#include <stdio.h>
#include <math.h>
#include<math.h>
int prime_in_range(int j);
int main()
{

    	int j, min, max;

    	printf("Enter min and max number:\n");
    	scanf("%d%d", &min, &max);
    	for (j = min; j <= max; j++)
    	{
        	if (prime_in_range(j) == 1)
            	printf("%d ,", j);
    	}
	printf("\n");
    	return 0;
}
int prime_in_range(int j)
{
	int  i, flag = 0,a;
    	a=j/2;	
    	for (i = 2; i <= a; i++)
    	{
        	if (j % i == 0)
        	{
		return 0; 
       		}
    	}
    	return 1;
}

