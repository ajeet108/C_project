#include<stdio.h>
#include<stdlib.h>
int main()
{
	int min,max,i,j,max1;
	printf("enter min data:\n");
	scanf("%d",&min);
	printf("enter max data:\n");
	scanf("%d",&max);
	max1=max;
	int temp=0,width=0,res;
	while(max1>0)
	{
		res=max1%10;
		temp++;
		max1/=10;
	}
	width=temp+2;
	printf("%d\n",width);
	for(i=min;i<=max;i++,printf("\n"))
		for(j=1;j<=10;j++)
			printf("%*d",width,i*j);
}
