#include<stdio.h>
#include<stdlib.h>
int swap(int b[5]);
int main()
{
	int a[5],i,j,temp=0;
	printf("array elements for swapping:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	swap(a);
}
int swap(int b[5])
{
	int i,j,temp=0;
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=b[i];
		//printf("temp=%d\n",temp);
		b[i]=b[j];
		//printf("b[i]=%d\n",b[i]);
		b[j]=temp;
		//printf("b[j]=%d\n",b[j]);
	}
	for(i=0;i<5;i++)
		printf("after swapping:%d\n",b[i]);
	printf("\n");
}
