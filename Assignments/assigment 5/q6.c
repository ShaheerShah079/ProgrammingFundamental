#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch[50];
	ptr=fopen("assigment4q2.txt","w+");
	if(ptr==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	printf("Enter string to write them on notepad and press enter to stop processing\n");
	while(1)
	{
		if(strlen(gets(ch))==0)
		{
			break;
		}
		else
		{
		 fputs(ch,ptr);	
		 fputc('\n',ptr);
		}
	}
	fclose(ptr);
	return 0;
}
