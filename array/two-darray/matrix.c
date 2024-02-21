#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][3],i,j,b[i][j],c[i][j];
	printf(" matrix A:[2x3]:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++) 
			scanf("%3d",&a[i][j]);
	}
	printf("matrix B:[2][3]:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			scanf("%3d",&b[i][j]);
	}
	printf("matrix C:[2][3]\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%3d ",a[i][j]+b[i][j]);
		printf("\n");
	}

}
