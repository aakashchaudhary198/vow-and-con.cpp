#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is constents",ch);
	}
	return 0;
}
