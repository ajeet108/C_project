#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,i,min,max;

	printf(" enter min data:");
	scanf("%d",&min);
	printf("enter max data:");
	scanf("%d",&max);
	for(num=min;num<=max;num++)
	{
		for(i=2;i<=(num/2);i++)
		{
			if((num%i)==0)
				break;
		}
	
		if(i == (num/2)+1)
		{
			printf("%d, ",num);
		}
	}
printf("\n");	
}
