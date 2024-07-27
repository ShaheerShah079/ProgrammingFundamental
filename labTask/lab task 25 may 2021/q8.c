#include<stdio.h>
#include<string.h>
int main()
{
	printf("Enter a string\n");
	char name[20];
	gets(name);
	int i;
	printf("the reverse string is \n");
	for(i=strlen(name)-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	return 0;
}
