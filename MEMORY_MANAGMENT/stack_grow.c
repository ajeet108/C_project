#include <stdio.h>
int fun(int *p)
{
	int a;
	
	printf(" add a=%d :  add p=%d \n",&a,p);

	if ( &a > p)
	printf(" stack is up");
	else
	printf(" down grow");		
}




int main()
{
	int x;
	fun(&x);
}
