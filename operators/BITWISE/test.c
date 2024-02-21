#include <stdio.h>

int main()
{
	/*
	int an = 4;

        if (an >> 3)

        	printf("%d\n", an);
	else 
		printf("no output\n");
	*/
	
	
	int a=-3;
	a= -a-a+ !a;
	printf(" :: %d ::\n",a);
	
	int n=2,m=1,o,p;
	o=n<m;
	p=(n>m) && (o<m);
	printf(" o:: %d and p::%d\n",o,p);


	int q=4,w=8,e=3,r=9,t;
	t=q++ + ++w * e-- - --r;
	printf("q=%d:w=%d:e=%d:r=%d:,t=%d:\n",q,w,e,r,t);

	int as=15,bn=13,cv=16,x,y;
	x=as -3%2+cv*2/4%2+bn/4;
	y= as = bn+5-bn+9/3;
	printf(" x:%d:y:%d:\n",x,y);
}
