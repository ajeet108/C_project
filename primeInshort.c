#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,min,max,digit,i,temp,flag,flag1,flag2,s;
	printf("enter min:");
	scanf("%d",&min);
	printf("enter max:");
	scanf("%d",&max);    
	for(num=min;num<=max;num++)
	{
		flag=1,s=sqrt(num);
		for(i=2;i<=s;i++)
		{
			if((num %i)==0)
			{
				flag=0;
			}
		}
		if(flag)
		{
			int var,l=0,count=0;
			temp=num;
			while(temp)
			{
				var=temp%10;
				if(var>=l)
				{
					l=var;
					count++;
				}
				temp/=10;
			}
			if(count == 3)
			{
				printf("%d, ",num);
			}
		}
	}
	printf("\n");
}
