#include<stdio.h>
#include<stdlib.h>
int main()
{
	char  ch;
	printf("enter alphabet for checking vowels and consonants::\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			printf(" the given alphabet is vowel::\n");
			break;
		default:
			printf(" the given alphabet is a consonant::\n");
	}

}
