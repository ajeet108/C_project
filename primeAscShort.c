#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,min,max,i;
	printf("enter min:");
	scanf("%d",&min);
	printf("enter max:");
	scanf("%d",&max);
	for(num=min;num<=max;num++)
	{
		int flag=1,s;
		s=sqrt(num);
		for(i=2;i<=s;i++)
		{
			if((num%i) == 0)
			{
				flag=0;
			}
		}
		if(flag)
		{
			int count=0,count1=0,var,var1,temp,l=0,h=9;
			temp=num;
			while(temp)
			{
				var=temp%10;
				var1=var;
				if(var<=h)
				{
					h=var;
					count++;
				}
				if(var1>=l)
				{
					l=var1;
					count1++;
				}
				temp/=10;
			}
			if(count == 3) 
			{
				printf("%d,  ",num);
			}
			if(count1 == 3)
			{
				printf("%d, ",num);
			}
		}
	}
	printf("\n");
}
