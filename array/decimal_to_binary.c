#include<stdio.h>
#include<stdlib.h>
int DecimalToBinary(int x);
int main()
{
        int a[5],i;
        printf("enter decimal number for converting into binary:\n");
	for(i=0;i<5;i++)
	{
        	scanf("%d",&a[i]);
	}
        DecimalToBinary(a[5]);
        printf("\n");
}
int DecimalToBinary(int x)
{
        int i=0,j,arr[20]={0};

        while(x>0)
        {
                arr[i++]=x%2;
                x=x/2;
        }
        for(j=i-1;j>=0;j--)
        {

                printf("%d",arr[j]);
        }
}
