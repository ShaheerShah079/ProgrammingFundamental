#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char string[100];
	printf("Enter a string\n");
	gets(string);
	printf("the reverse of that string is : ");
	for(i=(strlen(string)-1);i>=0;i--)
	{
		printf("%c",string[i]);
	}
	
	
	return 0;
}
