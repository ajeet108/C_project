#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int v=0,v1=0;
	puts("lower to higher\n");
	v1=v-1;
	printf("v=%u ------->v1=%u\n",v,v1);
	puts("higher to lower\n");
	v=v1+1;
	printf("v1=%u ------->v=%u\n",v1,v);
}
