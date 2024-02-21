#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int multi_table()
{
	int i=1,j=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("%d ",i*j);
			j++;
		}
		printf("\n");
		i++;
		
	}
}
int main()
{
	multi_table();
}
