#include<stdio.h>
#include<stdlib.h>
int prime(int num)
{
	int i,flag=0;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			return printf("not prime\n");
		}
	}
	if(flag == 0)
	return printf("prime\n");

}
int main()
{
	int num1[6]={2,4,7,5,8,6};
	int j,n;
	n=sizeof(num1)/sizeof(num1[0]);
	for(j=0;j<n;j++)
	{
		printf("%d \n",prime(num1[j]));
	}
}
