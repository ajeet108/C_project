#include<stdio.h>
#include<stdlib.h>

int add(int a[]);
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf(" enter array elements arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	add(arr);
	//printf(" sum : %d\n",add(arr[i]));
}
int add(int a[])
{
	int i,sum = 0;
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	return printf("sum=%d\n",sum);
}
