#include<stdio.h>
#include<string.h>
int main()
{
	int i,vowcheck=0;
	char string[100];
	printf("Enter a string\n");
	gets(string);
	printf("the number of vowel leter in the string is : ");
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'
		||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		{
			vowcheck++;
		}
	}
	printf("%d",vowcheck);
	
	return 0;
}
