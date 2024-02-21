#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,*ip=&a;
	char b,*cp=&b;
	printf("address of ip=%p ----------->%p\n",ip,ip+1);
	printf("address of cp=%p ----------->%p\n",cp,cp+1);
	printf("address of ip=%p ----------->%p\n",ip,ip++);
	printf("address of cp=%p ----------->%p\n",cp,cp++);


}
