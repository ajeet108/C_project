#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,bit,currentcount=0,currentbitpos=0,longestcount=0,longestpos=-1;
	printf("enter data\n");
	scanf("%d",&data);
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
	printf("\n");
	bit=31;
	while(bit>=0)
	{
		if((data>>bit)&1)
		{
			currentcount=0;
			currentbitpos=bit;
			while((bit>=0)&&((data>>bit)&1))
			{
				currentcount++;
				bit--;
			}
			if(currentcount>longestcount)
			{
				longestcount=currentcount;
				longestpos=currentbitpos;
			}
		}
		bit--;
	}
	printf("longest series of 1's at: %d ---------count=%d\n",longestpos,longestcount);
}
