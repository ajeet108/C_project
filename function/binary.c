#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	 int rev = 0,n=65;
    int bit;
    int count = sizeof(n) * 8 - 1; // Number of bits in the integer
    while (n)
    {
        bit = n & 1;
        rev |= bit << count; // Shift the bit to its correct position in the reversed number
        n >>= 1; // Move to the next bit
        count--;
    }*/

	
	int num,res=0,sum=0;
	scanf("%d",&num);
	while(num>0)
	{
		res=num%2;
		sum+=res;
		num/=2;
	}
	printf("%d\n",res);
}
